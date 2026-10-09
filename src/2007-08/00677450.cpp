// from server: 72% by colin
// roc 2007-08 00677450  unit: CXTPPopupBar  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677450
//
// 00677450  56                   push esi
// 00677451  8bf1                 mov esi, ecx
// 00677453  83bef400000001       cmp dword ptr [esi + 0xf4], 1
// 0067745a  752b                 jne 0x677487
// 0067745c  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 00677462  8b442408             mov eax, dword ptr [esp + 8]
// 00677466  8908                 mov dword ptr [eax], ecx
// 00677468  8b96f0010000         mov edx, dword ptr [esi + 0x1f0]
// 0067746e  895004               mov dword ptr [eax + 4], edx
// 00677471  8b8ef4010000         mov ecx, dword ptr [esi + 0x1f4]
// 00677477  894808               mov dword ptr [eax + 8], ecx
// 0067747a  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 00677480  89500c               mov dword ptr [eax + 0xc], edx
// 00677483  5e                   pop esi
// 00677484  c20400               ret 4
// 00677487  e8b4c5fcff           call 0x643a40
// 0067748c  8b10                 mov edx, dword ptr [eax]
// 0067748e  56                   push esi
// 0067748f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00677493  8bc8                 mov ecx, eax
// 00677495  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 0067749b  56                   push esi
// 0067749c  ffd0                 call eax
// 0067749e  8bc6                 mov eax, esi
// 006774a0  5e                   pop esi
// 006774a1  c20400               ret 4

struct CXTPPopupBar {
    char pad[0xf4];
    int field_f4;
    char pad2[0x1ec - 0xf8];
    int field_1ec;
    int field_1f0;
    int field_1f4;
    int field_1f8;
    int getValue(int* out);
};

extern "C" void* __cdecl helper_643a40();

int CXTPPopupBar::getValue(int* out) {
    if (field_f4 == 1) {
        out[0] = field_1ec;
        out[1] = field_1f0;
        out[2] = field_1f4;
        out[3] = field_1f8;
        return (int)out;
    }
    void* p = helper_643a40();
    int* vtbl = *(int**)p;
    int (*fn)(void*, int*) = (int (*)(void*, int*))vtbl[0xb0 / 4];
    fn(p, out);
    return (int)out;
}
