// from server: 42% by colin
// roc 2007-08 00728a00  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728a00
//
// 00728a00  6aff                 push -1
// 00728a02  6828ba7600           push 0x76ba28
// 00728a07  64a100000000         mov eax, dword ptr fs:[0]
// 00728a0d  50                   push eax
// 00728a0e  51                   push ecx
// 00728a0f  56                   push esi
// 00728a10  a188518b00           mov eax, dword ptr [0x8b5188]
// 00728a15  33c4                 xor eax, esp
// 00728a17  50                   push eax
// 00728a18  8d44240c             lea eax, [esp + 0xc]
// 00728a1c  64a300000000         mov dword ptr fs:[0], eax
// 00728a22  8bf1                 mov esi, ecx
// 00728a24  89742408             mov dword ptr [esp + 8], esi
// 00728a28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00728a2c  50                   push eax
// 00728a2d  e8eef7ffff           call 0x728220
// 00728a32  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00728a36  8b09                 mov ecx, dword ptr [ecx]
// 00728a38  33c0                 xor eax, eax
// 00728a3a  3bc8                 cmp ecx, eax
// 00728a3c  89442414             mov dword ptr [esp + 0x14], eax
// 00728a40  7407                 je 0x728a49
// 00728a42  8b11                 mov edx, dword ptr [ecx]
// 00728a44  8b4208               mov eax, dword ptr [edx + 8]
// 00728a47  ffd0                 call eax
// 00728a49  894610               mov dword ptr [esi + 0x10], eax
// 00728a4c  8bc6                 mov eax, esi
// 00728a4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00728a52  64890d00000000       mov dword ptr fs:[0], ecx
// 00728a59  59                   pop ecx
// 00728a5a  5e                   pop esi
// 00728a5b  83c410               add esp, 0x10
// 00728a5e  c20800               ret 8

struct Ubasic_connection_sp_counted_impl_p {
    char pad[0x10];
    void* field_10;
    void* construct(void* a, void* b);
};

extern "C" void __stdcall sub_728220(void*);

void* Ubasic_connection_sp_counted_impl_p::construct(void* a, void* b)
{
    sub_728220(a);
    void* p = *(void**)b;
    void* r = 0;
    if (p != 0) {
        r = ((void* (__thiscall*)(void*))((*(void***)p)[2]))(p);
    }
    field_10 = r;
    return this;
}
