// from server: 40% by colin
// roc 2007-08 00728ab0  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728ab0
//
// 00728ab0  6aff                 push -1
// 00728ab2  68b8ba7600           push 0x76bab8
// 00728ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00728abd  50                   push eax
// 00728abe  51                   push ecx
// 00728abf  56                   push esi
// 00728ac0  57                   push edi
// 00728ac1  a188518b00           mov eax, dword ptr [0x8b5188]
// 00728ac6  33c4                 xor eax, esp
// 00728ac8  50                   push eax
// 00728ac9  8d442410             lea eax, [esp + 0x10]
// 00728acd  64a300000000         mov dword ptr fs:[0], eax
// 00728ad3  8bf1                 mov esi, ecx
// 00728ad5  8974240c             mov dword ptr [esp + 0xc], esi
// 00728ad9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00728add  57                   push edi
// 00728ade  e83df7ffff           call 0x728220
// 00728ae3  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00728ae6  33c0                 xor eax, eax
// 00728ae8  3bc8                 cmp ecx, eax
// 00728aea  89442418             mov dword ptr [esp + 0x18], eax
// 00728aee  7407                 je 0x728af7
// 00728af0  8b01                 mov eax, dword ptr [ecx]
// 00728af2  8b5008               mov edx, dword ptr [eax + 8]
// 00728af5  ffd2                 call edx
// 00728af7  894610               mov dword ptr [esi + 0x10], eax
// 00728afa  8bc6                 mov eax, esi
// 00728afc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00728b00  64890d00000000       mov dword ptr fs:[0], ecx
// 00728b07  59                   pop ecx
// 00728b08  5f                   pop edi
// 00728b09  5e                   pop esi
// 00728b0a  83c410               add esp, 0x10
// 00728b0d  c20400               ret 4

struct Ubasic_connection {
    char pad[0x10];
    void* m_p;
    void* f(void*);
};

extern "C" void __cdecl sub_728220(void*);

void* Ubasic_connection::f(void* arg) {
    sub_728220(arg);
    void* q = *(void**)((char*)arg + 0x10);
    void* r = 0;
    if (q != 0) {
        void** vt = *(void***)q;
        r = ((void* (__thiscall*)(void*))vt[2])(q);
    }
    m_p = r;
    return this;
}
