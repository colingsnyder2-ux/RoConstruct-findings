// from server: 81% by colin
// roc 2007-08 005e53c0  unit: RBX::VInstance::?$FilteredSelection  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e53c0
//
// 005e53c0  56                   push esi
// 005e53c1  8b742408             mov esi, dword ptr [esp + 8]
// 005e53c5  85f6                 test esi, esi
// 005e53c7  742c                 je 0x5e53f5
// 005e53c9  8da42400000000       lea esp, [esp]
// 005e53d0  6a00                 push 0
// 005e53d2  68044e8800           push 0x884e04
// 005e53d7  684c1f8800           push 0x881f4c
// 005e53dc  6a00                 push 0
// 005e53de  56                   push esi
// 005e53df  e852b90400           call 0x630d36
// 005e53e4  83c414               add esp, 0x14
// 005e53e7  85c0                 test eax, eax
// 005e53e9  750e                 jne 0x5e53f9
// 005e53eb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005e53f1  85f6                 test esi, esi
// 005e53f3  75db                 jne 0x5e53d0
// 005e53f5  33c0                 xor eax, eax
// 005e53f7  5e                   pop esi
// 005e53f8  c3                   ret 
// 005e53f9  8bc8                 mov ecx, eax
// 005e53fb  5e                   pop esi
// 005e53fc  e9cffeffff           jmp 0x5e52d0

struct Instance;

struct FilteredSelection
{
    Instance* findFirstChild(const char* name, bool recursive);
};

extern "C" void* __cdecl func_00630d36(Instance* instance, int, const char*, const char*, int);
extern "C" void func_005e52d0();

Instance* FilteredSelection::findFirstChild(const char* name, bool recursive)
{
    Instance* current = (Instance*)this;
    if (current == 0)
        return 0;
    do
    {
        void* result = func_00630d36(current, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0)
        {
            func_005e52d0();
            return 0;
        }
        current = *(Instance**)((char*)current + 0xbc);
    } while (current != 0);
    return 0;
}
