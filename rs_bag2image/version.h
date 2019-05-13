#ifndef __RS_BAG2IMAGE_VERSION__
#define __RS_BAG2IMAGE_VERSION__

#define TO_STRING_EXP(v) #v
#define TO_STRING(v)     TO_STRING_EXP(v)

#define RS_BAG2IMAGE_VERSION_MAJOR    0
#define RS_BAG2IMAGE_VERSION_MINOR    1
#define RS_BAG2IMAGE_VERSION_REVISION 3

#define RS_BAG2IMAGE_VERSION TO_STRING( RS_BAG2IMAGE_VERSION_MAJOR ) "." TO_STRING( RS_BAG2IMAGE_VERSION_MINOR ) "." TO_STRING( RS_BAG2IMAGE_VERSION_REVISION )

#endif // __RS_BAG2IMAGE_VERSION__