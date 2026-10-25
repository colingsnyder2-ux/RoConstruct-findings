// from server: 100% by tester
// roc 2011-06 0092be20  unit: Ogre::GfxClustererPart  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092be20
//
// 0092be20  51                   push ecx
// 0092be21  8b442408             mov eax, dword ptr [esp + 8]
// 0092be25  c7042400000000       mov dword ptr [esp], 0
// 0092be2c  c7007052af00         mov dword ptr [eax], 0xaf5270
// 0092be32  59                   pop ecx
// 0092be33  c20400               ret 4

struct GfxClustererPart {
    void construct(void** out);
};

void GfxClustererPart::construct(void** out) {
    volatile int zero = 0;
    *out = (void*)0xaf5270;
}