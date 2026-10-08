// from server: 61% by colin
// roc 2007-08 005f2490  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2490
//
// 005f2490  8b442408             mov eax, dword ptr [esp + 8]
// 005f2494  83f802               cmp eax, 2
// 005f2497  7519                 jne 0x5f24b2
// 005f2499  56                   push esi
// 005f249a  8b742408             mov esi, dword ptr [esp + 8]
// 005f249e  56                   push esi
// 005f249f  b970198b00           mov ecx, 0x8b1970
// 005f24a4  ff1508e77700         call dword ptr [0x77e708]
// 005f24aa  f6d8                 neg al
// 005f24ac  1bc0                 sbb eax, eax
// 005f24ae  23c6                 and eax, esi
// 005f24b0  5e                   pop esi
// 005f24b1  c3                   ret 
// 005f24b2  8b542404             mov edx, dword ptr [esp + 4]
// 005f24b6  c644240800           mov byte ptr [esp + 8], 0
// 005f24bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f24bf  51                   push ecx
// 005f24c0  50                   push eax
// 005f24c1  52                   push edx
// 005f24c2  e829fcffff           call 0x5f20f0
// 005f24c7  83c40c               add esp, 0xc
// 005f24ca  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S_func_005f2490 {
    int f(int a1, int a2, int a3);
};

extern "C" int __cdecl func_005f20f0(int, int, int);

int S_func_005f2490::f(int a1, int a2, int a3)
{
    if (a3 == 2) {
        int v = a2;
        type_info* ti = (type_info*)0x8b1970;
        bool eq = (*ti) == *(type_info*)0x8b1970;
        return eq ? v : 0;
    }
    return func_005f20f0(a1, a3, 0);
}
