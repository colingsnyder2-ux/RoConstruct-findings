// from server: 77% by colin
// roc 2007-08 00715310  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715310
//
// 00715310  56                   push esi
// 00715311  8bf1                 mov esi, ecx
// 00715313  e878bcffff           call 0x710f90
// 00715318  8b10                 mov edx, dword ptr [eax]
// 0071531a  8bc8                 mov ecx, eax
// 0071531c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071531f  ffd0                 call eax
// 00715321  85c0                 test eax, eax
// 00715323  8b442408             mov eax, dword ptr [esp + 8]
// 00715327  7511                 jne 0x71533a
// 00715329  c70000000000         mov dword ptr [eax], 0
// 0071532f  c7400400000000       mov dword ptr [eax + 4], 0
// 00715336  5e                   pop esi
// 00715337  c20400               ret 4
// 0071533a  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00715340  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00715346  8908                 mov dword ptr [eax], ecx
// 00715348  895004               mov dword ptr [eax + 4], edx
// 0071534b  5e                   pop esi
// 0071534c  c20400               ret 4

struct CXTCaptionButton {
    char pad[0x84];
    int field84;
    int field88;
    void* getSomething();
    void getRect(int* out);
};

void* CXTCaptionButton::getSomething()
{
    return 0;
}

void CXTCaptionButton::getRect(int* out)
{
    void* p = getSomething();
    int* vtable = *(int**)p;
    int (*fn)(void*) = (int (*)(void*))vtable[6];
    int result = fn(p);
    if (result == 0) {
        out[0] = 0;
        out[1] = 0;
    } else {
        out[0] = field84;
        out[1] = field88;
    }
}
