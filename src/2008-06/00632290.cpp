// from server: 81% by colin
// roc 2008-06 00632290  unit: RBX::VBodyPosition::?$FactoryProduct  size: 195 bytes

unsigned int __cdecl getName();

extern float g_847b94;
extern float g_847b7c;
extern float g_81c434;

extern unsigned char table0[];
extern unsigned char table10[];
extern unsigned char table14[];
extern unsigned char table20[];
extern unsigned char table24[];
extern unsigned char table44[];
extern unsigned char table64[];
extern unsigned char table84[];
extern unsigned char tableA4[];
extern unsigned char tableC4[];
extern unsigned char table130[];
extern unsigned char table138[];

struct VBodyPosition {
    void construct();
};

void VBodyPosition::construct() {
    getName();
    *(float*)((char*)this + 0x148) = g_847b94;
    *(void**)((char*)this + 0x0) = (void*)table0;
    *(void**)((char*)this + 0x10) = (void*)table10;
    *(void**)((char*)this + 0x14) = (void*)table14;
    *(void**)((char*)this + 0x20) = (void*)table20;
    *(void**)((char*)this + 0x24) = (void*)table24;
    *(void**)((char*)this + 0x44) = (void*)table44;
    *(void**)((char*)this + 0x64) = (void*)table64;
    *(void**)((char*)this + 0x84) = (void*)table84;
    *(void**)((char*)this + 0xa4) = (void*)tableA4;
    *(void**)((char*)this + 0xc4) = (void*)tableC4;
    *(void**)((char*)this + 0x130) = (void*)table130;
    *(void**)((char*)this + 0x138) = (void*)table138;
    float f = g_847b7c;
    *(float*)((char*)this + 0x14c) = f;
    *(float*)((char*)this + 0x150) = f;
    *(float*)((char*)this + 0x154) = f;
    float z = 0.0f;
    *(float*)((char*)this + 0x158) = z;
    float c = g_81c434;
    *(float*)((char*)this + 0x15c) = c;
    *(float*)((char*)this + 0x160) = c;
    *(float*)((char*)this + 0x164) = c;
    *(float*)((char*)this + 0x168) = c;
    *(float*)((char*)this + 0x16c) = c;
}
