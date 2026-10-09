// from server: 81% by colin
// roc 2007-08 0043a080  unit: RBX::VSoundId::?$XItem  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043a080
//
// 0043a080  53                   push ebx
// 0043a081  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0043a085  55                   push ebp
// 0043a086  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0043a08a  56                   push esi
// 0043a08b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043a08f  57                   push edi
// 0043a090  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0043a094  3bf7                 cmp esi, edi
// 0043a096  740e                 je 0x43a0a6
// 0043a098  8b06                 mov eax, dword ptr [esi]
// 0043a09a  50                   push eax
// 0043a09b  8bcb                 mov ecx, ebx
// 0043a09d  ffd5                 call ebp
// 0043a09f  83c604               add esi, 4
// 0043a0a2  3bf7                 cmp esi, edi
// 0043a0a4  75f2                 jne 0x43a098
// 0043a0a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043a0aa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043a0ae  5f                   pop edi
// 0043a0af  8928                 mov dword ptr [eax], ebp
// 0043a0b1  5e                   pop esi
// 0043a0b2  895804               mov dword ptr [eax + 4], ebx
// 0043a0b5  5d                   pop ebp
// 0043a0b6  894808               mov dword ptr [eax + 8], ecx
// 0043a0b9  5b                   pop ebx
// 0043a0ba  c3                   ret 

struct S_func_0043a080 {
};

void __cdecl f(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6)
{
    int* begin = (int*)a3;
    int* end = (int*)a4;
    void* ctx = a2;
    void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))a5;
    while (begin != end) {
        fn(ctx, *begin);
        ++begin;
    }
    int* out = (int*)a1;
    out[0] = (int)a5;
    out[1] = (int)a2;
    out[2] = (int)a6;
}
