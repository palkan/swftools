/* demofont.c

   Character data for some glyphs needed by text.c

   Dumped with dumpfont.c
   
   Part of the swftools package.

   This file is distributed under the GPL, see file COPYING for details 

*/

#define addGlyph fn3711

void fn3711(SWFFONT * f,int i,U16 ascii,U16 advance,U8 * data,U32 bitlen)
{ SHAPE * s;
  U32 l = (bitlen+7)/8;

  if (FAILED(swf_ShapeNew(&s))) return;
  s->data = malloc(l);
  if (!s->data) { swf_ShapeFree(s); return; }

  f->glyph2ascii[i]     = ascii;
  f->ascii2glyph[ascii] = i;
  f->glyph[i].advance   = advance;
  f->glyph[i].shape     = s;
  s->bitlen             = bitlen;
  s->bits.fill          = 1;
  memcpy(s->data,data,l);
}

U8 Glyphs_Demo_Font[] = {
          0x35, 0x66, 0xc2, 0xd5, 0xe3, 0x9b, 0x62, 0x08, 
          0xea, 0x09, 0xe2, 0x4c, 0xf8, 0xba, 0x59, 0x2d, 
          0x93, 0x1d, 0xe4, 0xc3, 0x6b, 0x40, 0x92, 0x90, 
          0x30, 0x36, 0x4c, 0x0c, 0xe5, 0xa9, 0xbe, 0x46, 
          0x40, 0x1a, 0xf5, 0x50, 0xec, 0x3b, 0x6a, 0xa4, 
          0xd8, 0x8a, 0xe1, 0x4b, 0x66, 0x00, 0x40, 0x0e, 
          0x11, 0x91, 0x35, 0x9f, 0x03, 0x51, 0x4e, 0x8a, 
          0x5c, 0x17, 0x7e, 0x8d, 0xda, 0x0a, 0x48, 0xa0, 
          0x08, 0xed, 0x22, 0x1b, 0x0f, 0x7c, 0xa1, 0xb7, 
          0x80, 0x9f, 0xc3, 0x69, 0xec, 0x53, 0xea, 0xdc, 
          0xd8, 0x59, 0xd1, 0x8a, 0x60, 0x0b, 0xc1, 0x6d, 
          0x09, 0x4b, 0x51, 0x5b, 0x8e, 0x55, 0xb8, 0x9c, 
          0x80, 0x95, 0xa0, 0x05, 0x88, 0xa4, 0x75, 0x70, 
          0x1c, 0x8c, 0x0f, 0x9b, 0x40, 0x35, 0x62, 0xfa, 
          0x9c, 0xf9, 0x53, 0x04, 0xa0, 0x15, 0x86, 0x1d, 
          0x19, 0x9c, 0xd3, 0xca, 0x34, 0x3a, 0x40, 0x1a, 
          0x29, 0x6e, 0x47, 0xf4, 0x6e, 0xd6, 0xaf, 0xd4, 
          0x6c, 0xc9, 0xa3, 0x28, 0x7e, 0x20, 0x2b, 0x70, 
          0xcc, 0x13, 0x00, 0x59, 0x7e, 0x77, 0xe9, 0xd6, 
          0x7d, 0x36, 0x75, 0xae, 0xf8, 0x8d, 0x3c, 0x5d, 
          0xbd, 0x11, 0xc8, 0xd0, 0x5c, 0x00, 0x35, 0x47, 
          0x8c, 0x93, 0x92, 0x50, 0x26, 0x42, 0x5c, 0xa4, 
          0x37, 0xa7, 0x97, 0x82, 0x80, 0x0f, 0xa6, 0x00, 
          0x64, 0x28, 0x48, 0x98, 0x9d, 0x25, 0x04, 0x02, 
          0x56, 0x20, 0x0f, 0xd8, 0x98, 0x83, 0x60, 0x02, 
          0x7a, 0x60, 0x08, 0x6c, 0xbb, 0xa9, 0x6e, 0xd0, 
          0x92, 0x00, 0x15, 0x12, 0x92, 0x3c, 0xac, 0xf1, 
          0x39, 0x01, 0x33, 0x40, 0x01, 0xfa, 0x7c, 0xc6, 
          0xc8, 0x60, 0x0b, 0x12, 0x80, 0x7b, 0x89, 0xfc, 
          0xb8, 0xdf, 0xcc, 0x41, 0x2c, 0xc4, 0x10, 0x40, 
          0x4d, 0x30, 0x01, 0x87, 0x5d, 0x36, 0x6d, 0xd0, 
          0x05, 0x54, 0xa0, 0x20, 0x9f, 0x85, 0x29, 0xf8, 
          0x2c, 0xf1, 0x80, 0x35, 0x4a, 0x44, 0x53, 0xdd, 
          0x4e, 0x68, 0x61, 0x37, 0x6d, 0xb7, 0x17, 0x34, 
          0xb8, 0xb2, 0xd2, 0x01, 0x2d, 0xd0, 0x1a, 0xc9, 
          0xc9, 0x52, 0x40, 0x2f, 0x20, 0x0e, 0x20, 0xa4, 
          0xa4, 0x0a, 0x2f, 0x2f, 0xb5, 0x24, 0x92, 0x66, 
          0x63, 0x10, 0x05, 0x19, 0x40, 0x3f, 0xa2, 0x9a, 
          0x5a, 0x09, 0xa3, 0x00, 0xdb, 0x41, 0xe3, 0xa6, 
          0x5e, 0xe3, 0xa0, 0x34, 0xdd, 0x0b, 0xf7, 0x6b, 
          0xba, 0x08, 0xcc, 0x1c, 0x8c, 0x4e, 0x47, 0x2a, 
          0x84, 0x8c, 0x40, 0x4a, 0x88, 0x01, 0x6d, 0x92, 
          0x2d, 0x58, 0x12, 0x4a, 0x02, 0xee, 0x8d, 0x33, 
          0x73, 0xf4, 0x5c, 0x6e, 0x4d, 0x6f, 0xb9, 0xd5, 
          0xc7, 0x2e, 0x9c, 0x80, 0x2a, 0x4a, 0x02, 0x42, 
          0x7b, 0x52, 0xa7, 0xb4, 0xf4, 0x06, 0xd4, 0x20, 
          0xbd, 0x68, 0x84, 0x67, 0x67, 0x33, 0xae, 0x3a, 
          0x08, 0x00, 0x35, 0x62, 0x96, 0xd0, 0x77, 0x52, 
          0xdb, 0x0d, 0x7a, 0xa8, 0xf6, 0x25, 0x78, 0x52, 
          0x99, 0x40, 0x2d, 0x1a, 0x3e, 0x43, 0x50, 0x50, 
          0x09, 0x10, 0x01, 0x0d, 0xa4, 0x3f, 0x52, 0x6c, 
          0xd0, 0x4e, 0x5d, 0xec, 0x70, 0x19, 0x97, 0x01, 
          0x9b, 0xc0, 0x24, 0xa4, 0x0a, 0xb3, 0x92, 0xac, 
          0xf5, 0xa6, 0x5e, 0xda, 0x00, 0x4e, 0xe1, 0xb3, 
          0x36, 0x2d, 0xf4, 0x70, 0x91, 0xcd, 0x5d, 0x9a, 
          0x53, 0x99, 0x4b, 0xdc, 0xda, 0x41, 0x77, 0x98, 
          0xf0, 0x00, 0x35, 0x48, 0x34, 0x6d, 0xdc, 0x6d, 
          0x68, 0xa7, 0x2d, 0xc0, 0x3c, 0x46, 0x49, 0xb1, 
          0x00, 0x23, 0xa4, 0x45, 0x78, 0x8d, 0x08, 0x3e, 
          0xf3, 0x0c, 0x0b, 0x58, 0xaa, 0xba, 0x76, 0xbf, 
          0x5d, 0xaf, 0x1a, 0x36, 0xee, 0x24, 0x34, 0x53, 
          0x96, 0xa8, 0x6d, 0x6d, 0x78, 0xec, 0xec, 0x56, 
          0x85, 0x9c, 0x78, 0xdb, 0x73, 0x8e, 0xf6, 0x92, 
          0x68, 0x5b, 0xc7, 0x6d, 0x9f, 0xe5, 0xe5, 0x73, 
          0x97, 0x39, 0x32, 0xce, 0x2e, 0xb4, 0x6d, 0xdc, 
          0x60, 0x68, 0xa7, 0xae, 0xe8, 0x98, 0xf0, 0x80, 
          0x3a, 0x40, 0x0f, 0x21, 0x6e, 0x23, 0x12, 0x11, 
          0xbc, 0xc7, 0x29, 0xdb, 0xcd, 0x7b, 0x26, 0x91, 
          0x59, 0xa6, 0xba, 0xfe, 0x34, 0x6d, 0x00, 0x00 };

SWFFONT * Font_Demo_Font(U16 id)
{ SWFFONT * f;
  int i;

  if (!(f=malloc(sizeof(SWFFONT)))) return NULL;
  memset(f,0x00,sizeof(SWFFONT));
  f->id       = id;
  f->version  = 1;
  f->name     = strdup("Demo Font");
  f->flags    = 0x00;
  f->numchars = 6;
  f->maxascii = 256;
  f->glyph    = (SWFGLYPH*)malloc(sizeof(SWFGLYPH)*6);
  f->glyph2ascii = (U16*)malloc(sizeof(U16)*6);
  f->ascii2glyph = (int*)malloc(sizeof(int)*256);

  addGlyph(f, 0, 102,  64, &Glyphs_Demo_Font[0x0000], 872); // f
  addGlyph(f, 1, 108,  53, &Glyphs_Demo_Font[0x006d], 452); // l
  addGlyph(f, 2, 111,  96, &Glyphs_Demo_Font[0x00a6], 743); // o
  addGlyph(f, 3, 115,  74, &Glyphs_Demo_Font[0x0103], 951); // s
  addGlyph(f, 4, 116,  53, &Glyphs_Demo_Font[0x017a], 570); // t
  addGlyph(f, 5, 119, 138, &Glyphs_Demo_Font[0x01c2], 806); // w
  return f;
}

#undef addGlyph
