// from server: 28% by colin
// roc 2007-08 007271f0  unit: boost::thread_resource_error  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007271f0
//
// 007271f0  6aff                 push -1
// 007271f2  6828ba7600           push 0x76ba28
// 007271f7  64a100000000         mov eax, dword ptr fs:[0]
// 007271fd  50                   push eax
// 007271fe  51                   push ecx
// 007271ff  56                   push esi
// 00727200  a188518b00           mov eax, dword ptr [0x8b5188]
// 00727205  33c4                 xor eax, esp
// 00727207  50                   push eax
// 00727208  8d44240c             lea eax, [esp + 0xc]
// 0072720c  64a300000000         mov dword ptr fs:[0], eax
// 00727212  8bf1                 mov esi, ecx
// 00727214  89742408             mov dword ptr [esp + 8], esi
// 00727218  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0072721b  85c9                 test ecx, ecx
// 0072721d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00727225  7408                 je 0x72722f
// 00727227  8b01                 mov eax, dword ptr [ecx]
// 00727229  8b10                 mov edx, dword ptr [eax]
// 0072722b  6a01                 push 1
// 0072722d  ffd2                 call edx
// 0072722f  8bce                 mov ecx, esi
// 00727231  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00727239  e822120000           call 0x728460
// 0072723e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00727242  64890d00000000       mov dword ptr fs:[0], ecx
// 00727249  59                   pop ecx
// 0072724a  5e                   pop esi
// 0072724b  83c410               add esp, 0x10
// 0072724e  c3                   ret 

struct boost_thread_resource_error
{
    void* vfptr;
    int field4;
    int field8;
    int fieldC;
    void* field10;
    void destroy();
};

extern "C" void __stdcall sub_728460(void* p);

void boost_thread_resource_error::destroy()
{
    if (field10)
    {
        void** vtbl = *(void***)field10;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0];
        fn(field10, 1);
    }
    sub_728460(this);
}
