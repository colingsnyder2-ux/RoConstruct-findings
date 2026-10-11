// from server: 59% by colin
// roc 2008-06 00587710  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587710
//
// 00587710  6aff                 push -1
// 00587712  6848147d00           push 0x7d1448
// 00587717  64a100000000         mov eax, dword ptr fs:[0]
// 0058771d  50                   push eax
// 0058771e  64892500000000       mov dword ptr fs:[0], esp
// 00587725  83ec0c               sub esp, 0xc
// 00587728  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058772c  8b00                 mov eax, dword ptr [eax]
// 0058772e  56                   push esi
// 0058772f  8bf1                 mov esi, ecx
// 00587731  8b08                 mov ecx, dword ptr [eax]
// 00587733  894c2404             mov dword ptr [esp + 4], ecx
// 00587737  8b5004               mov edx, dword ptr [eax + 4]
// 0058773a  89542408             mov dword ptr [esp + 8], edx
// 0058773e  8b4008               mov eax, dword ptr [eax + 8]
// 00587741  85c0                 test eax, eax
// 00587743  740b                 je 0x587750
// 00587745  8b10                 mov edx, dword ptr [eax]
// 00587747  8bc8                 mov ecx, eax
// 00587749  8b4208               mov eax, dword ptr [edx + 8]
// 0058774c  ffd0                 call eax
// 0058774e  eb02                 jmp 0x587752
// 00587750  33c0                 xor eax, eax
// 00587752  8944240c             mov dword ptr [esp + 0xc], eax
// 00587756  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058775a  8b0e                 mov ecx, dword ptr [esi]
// 0058775c  8d542404             lea edx, [esp + 4]
// 00587760  52                   push edx
// 00587761  8b10                 mov edx, dword ptr [eax]
// 00587763  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0058776b  ffd2                 call edx
// 0058776d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00587771  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00587779  5e                   pop esi
// 0058777a  85c9                 test ecx, ecx
// 0058777c  7408                 je 0x587786
// 0058777e  8b01                 mov eax, dword ptr [ecx]
// 00587780  8b10                 mov edx, dword ptr [eax]
// 00587782  6a01                 push 1
// 00587784  ffd2                 call edx
// 00587786  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058778a  64890d00000000       mov dword ptr fs:[0], ecx
// 00587791  83c418               add esp, 0x18
// 00587794  c21000               ret 0x10

struct VChangeHistoryService {
    void FactoryProduct(int, int, int, int);
};

void VChangeHistoryService::FactoryProduct(int a, int b, int c, int d)
{
    int local[3];
    int *p = (int *)a;
    int *q = (int *)*p;
    local[0] = q[0];
    local[1] = q[1];
    int *r = (int *)q[2];
    if (r)
        local[2] = ((int (__thiscall *)(void *))((int *)*r)[2])(r);
    else
        local[2] = 0;
    ((void (__thiscall *)(void *, int *))*(int *)*p)((void *)*p, local);
    if (local[2])
        ((void (__thiscall *)(void *, int))*(int *)local[2])((void *)local[2], 1);
}
