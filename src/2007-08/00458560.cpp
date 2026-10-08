// from server: 87% by colin
// roc 2007-08 00458560  unit: CRobloxWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458560
//
// 00458560  8b442404             mov eax, dword ptr [esp + 4]
// 00458564  56                   push esi
// 00458565  50                   push eax
// 00458566  8bf1                 mov esi, ecx
// 00458568  e8b5831d00           call 0x630922
// 0045856d  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00458570  85c9                 test ecx, ecx
// 00458572  5e                   pop esi
// 00458573  740d                 je 0x458582
// 00458575  c744240401000000     mov dword ptr [esp + 4], 1
// 0045857d  e96eb50000           jmp 0x463af0
// 00458582  c20400               ret 4

struct CRobloxWnd {
    void sub_458560(int);
};

extern "C" void __stdcall sub_630922(int);
extern "C" void __stdcall sub_463af0(int);

void CRobloxWnd::sub_458560(int a) {
    sub_630922(a);
    int* p = *(int**)((char*)this + 0x74);
    if (p != 0) {
        sub_463af0(1);
    }
}
