// from server: 83% by colin
// roc 2007-08 00715350  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715350
//
// 00715350  56                   push esi
// 00715351  8bf1                 mov esi, ecx
// 00715353  e838bcffff           call 0x710f90
// 00715358  8b10                 mov edx, dword ptr [eax]
// 0071535a  8bc8                 mov ecx, eax
// 0071535c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0071535f  ffd0                 call eax
// 00715361  85c0                 test eax, eax
// 00715363  8b442408             mov eax, dword ptr [esp + 8]
// 00715367  7511                 jne 0x71537a
// 00715369  c70000000000         mov dword ptr [eax], 0
// 0071536f  c7400400000000       mov dword ptr [eax + 4], 0
// 00715376  5e                   pop esi
// 00715377  c20400               ret 4
// 0071537a  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00715380  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 00715386  8908                 mov dword ptr [eax], ecx
// 00715388  895004               mov dword ptr [eax + 4], edx
// 0071538b  5e                   pop esi
// 0071538c  c20400               ret 4

struct CXTCaptionButton {
    char pad[0x8c];
    int field_8c;
    int field_90;
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
    int* obj = (int*)p;
    int (*fn)(void) = (int (*)(void))((int*)obj)[0x18/4];
    int result = fn();
    if (result == 0) {
        out[0] = 0;
        out[1] = 0;
    } else {
        out[0] = field_8c;
        out[1] = field_90;
    }
}
