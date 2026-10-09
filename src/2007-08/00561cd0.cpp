// from server: 100% by colin
// roc 2007-08 00561cd0  unit: RBX::VModelInstance::?$FilteredSelection  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561cd0
//
// 00561cd0  56                   push esi
// 00561cd1  8b742408             mov esi, dword ptr [esp + 8]
// 00561cd5  85f6                 test esi, esi
// 00561cd7  742c                 je 0x561d05
// 00561cd9  8da42400000000       lea esp, [esp]
// 00561ce0  6a00                 push 0
// 00561ce2  68044e8800           push 0x884e04
// 00561ce7  684c1f8800           push 0x881f4c
// 00561cec  6a00                 push 0
// 00561cee  56                   push esi
// 00561cef  e842f00c00           call 0x630d36
// 00561cf4  83c414               add esp, 0x14
// 00561cf7  85c0                 test eax, eax
// 00561cf9  750e                 jne 0x561d09
// 00561cfb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00561d01  85f6                 test esi, esi
// 00561d03  75db                 jne 0x561ce0
// 00561d05  33c0                 xor eax, eax
// 00561d07  5e                   pop esi
// 00561d08  c3                   ret 
// 00561d09  8bc8                 mov ecx, eax
// 00561d0b  5e                   pop esi
// 00561d0c  e9aff1eeff           jmp 0x450ec0

struct Instance;

extern "C" void* __cdecl func_00630d36(Instance* self, int a, void* b, void* c, int d);
extern "C" void* __fastcall func_00450ec0(void* p);

struct FilteredSelection {
    static Instance* findFirstChildOfClass(Instance* inst, const char* className);
};

Instance* FilteredSelection::findFirstChildOfClass(Instance* inst, const char* className)
{
    while (inst != 0) {
        void* result = func_00630d36(inst, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (result != 0)
            return (Instance*)func_00450ec0(result);
        inst = *(Instance**)((char*)inst + 0xbc);
    }
    return 0;
}
