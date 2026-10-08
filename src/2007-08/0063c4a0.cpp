// from server: 21% by colin
// roc 2007-08 0063c4a0  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063c4a0
//
// 0063c4a0  83ec10               sub esp, 0x10
// 0063c4a3  56                   push esi
// 0063c4a4  8bf1                 mov esi, ecx
// 0063c4a6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063c4ac  85c9                 test ecx, ecx
// 0063c4ae  7509                 jne 0x63c4b9
// 0063c4b0  33c0                 xor eax, eax
// 0063c4b2  5e                   pop esi
// 0063c4b3  83c410               add esp, 0x10
// 0063c4b6  c20400               ret 4
// 0063c4b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0063c4bd  8d442404             lea eax, [esp + 4]
// 0063c4c1  50                   push eax
// 0063c4c2  52                   push edx
// 0063c4c3  e808a10000           call 0x6465d0
// 0063c4c8  50                   push eax
// 0063c4c9  8bce                 mov ecx, esi
// 0063c4cb  e840e3ffff           call 0x63a810
// 0063c4d0  5e                   pop esi
// 0063c4d1  83c410               add esp, 0x10
// 0063c4d4  c20400               ret 4

struct CXTPControl {
    char pad[0xfc];
    void* field_fc;
    int method_63a810(void*);
    int sub_63c4a0(void*);
};

extern "C" void* __stdcall sub_6465d0(void* arg, void* out);

int CXTPControl::sub_63c4a0(void* arg) {
    if (field_fc == 0) return 0;
    char local[16];
    void* r = sub_6465d0(arg, local);
    return method_63a810(r);
}
