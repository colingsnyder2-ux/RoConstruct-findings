// from server: 33% by colin
// roc 2007-08 005717b0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005717b0
//
// 005717b0  6aff                 push -1
// 005717b2  68416e7500           push 0x756e41
// 005717b7  64a100000000         mov eax, dword ptr fs:[0]
// 005717bd  50                   push eax
// 005717be  64892500000000       mov dword ptr fs:[0], esp
// 005717c5  51                   push ecx
// 005717c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005717ca  89442414             mov dword ptr [esp + 0x14], eax
// 005717ce  890424               mov dword ptr [esp], eax
// 005717d1  85c0                 test eax, eax
// 005717d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005717db  7414                 je 0x5717f1
// 005717dd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005717e1  8b11                 mov edx, dword ptr [ecx]
// 005717e3  83c104               add ecx, 4
// 005717e6  51                   push ecx
// 005717e7  8d4804               lea ecx, [eax + 4]
// 005717ea  8910                 mov dword ptr [eax], edx
// 005717ec  e8dff7ffff           call 0x570fd0
// 005717f1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005717f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005717fc  83c410               add esp, 0x10
// 005717ff  c3                   ret 
// 00571800  83c104               add ecx, 4
// 00571803  e9b8faffff           jmp 0x5712c0

struct RBX_worker_thread_Udata_sp_counted_impl_p
{
    void func_005717b0(int, int);
};

extern "C" void __stdcall func_00570fd0(int*, int*);

void RBX_worker_thread_Udata_sp_counted_impl_p::func_005717b0(int a, int b)
{
    int* p = (int*)a;
    if (p != 0)
    {
        int v = *(int*)b;
        int* q = (int*)((char*)p + 4);
        *(int*)p = v;
        func_00570fd0(q, (int*)((char*)b + 4));
    }
}
