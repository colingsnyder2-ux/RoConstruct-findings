// roc 2009-06 00609120  unit: RBX::UnifiedWidget  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609120
//
// 00609120  8d4424e4             lea eax, [esp - 0x1c]
// 00609124  83ec1c               sub esp, 0x1c
// 00609127  50                   push eax
// 00609128  e883ffffff           call 0x6090b0
// 0060912d  83c404               add esp, 4
// 00609130  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00609134  7217                 jb 0x60914d
// 00609136  8b4004               mov eax, dword ptr [eax + 4]
// 00609139  50                   push eax
// 0060913a  ff15a4e38900         call dword ptr [0x89e3a4]
// 00609140  8d0c24               lea ecx, [esp]
// 00609143  ff15c4e48900         call dword ptr [0x89e4c4]
// 00609149  83c41c               add esp, 0x1c
// 0060914c  c3                   ret 
// 0060914d  83c004               add eax, 4
// 00609150  50                   push eax
// 00609151  ff15a4e38900         call dword ptr [0x89e3a4]
// 00609157  8d0c24               lea ecx, [esp]
// 0060915a  ff15c4e48900         call dword ptr [0x89e4c4]
// 00609160  83c41c               add esp, 0x1c
// 00609163  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

extern S* __cdecl func_00568460(S*);
extern int (__stdcall *DeleteFileA)(const char*);
extern void (__thiscall *destroy_string)(S*);

void func_005684d0()
{
    S temporary;
    S* result = func_00568460(&temporary);
    DeleteFileA(result->capacity >= 16
        ? result->storage.pointer
        : result->storage.buffer);
    destroy_string(&temporary);
}