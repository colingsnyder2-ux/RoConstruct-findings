// from server: 33% by colin
// roc 2007-08 004a3d00  unit: boost::Vmutex::?$sp_counted_impl_p  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3d00
//
// 004a3d00  6aff                 push -1
// 004a3d02  68b89a7400           push 0x749ab8
// 004a3d07  64a100000000         mov eax, dword ptr fs:[0]
// 004a3d0d  50                   push eax
// 004a3d0e  51                   push ecx
// 004a3d0f  56                   push esi
// 004a3d10  a188518b00           mov eax, dword ptr [0x8b5188]
// 004a3d15  33c4                 xor eax, esp
// 004a3d17  50                   push eax
// 004a3d18  8d44240c             lea eax, [esp + 0xc]
// 004a3d1c  64a300000000         mov dword ptr fs:[0], eax
// 004a3d22  8bf1                 mov esi, ecx
// 004a3d24  89742408             mov dword ptr [esp + 8], esi
// 004a3d28  8d4e04               lea ecx, [esi + 4]
// 004a3d2b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a3d33  e8e8fbffff           call 0x4a3920
// 004a3d38  c70684cc7900         mov dword ptr [esi], 0x79cc84
// 004a3d3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a3d42  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3d49  59                   pop ecx
// 004a3d4a  5e                   pop esi
// 004a3d4b  83c410               add esp, 0x10
// 004a3d4e  c3                   ret 

struct Vmutex_sp_counted_impl_p {
    void* vfptr;
    char base[8];
    Vmutex_sp_counted_impl_p();
};

extern "C" void __stdcall sub_4a3920(void*);

Vmutex_sp_counted_impl_p::Vmutex_sp_counted_impl_p()
{
    sub_4a3920(&base[0]);
    vfptr = (void*)0x79cc84;
}
