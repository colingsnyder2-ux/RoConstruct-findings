// from server: 64% by colin
// roc 2007-08 00423e70  unit: CRobloxTreeCtrlNode  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00423e70
//
// 00423e70  8b442408             mov eax, dword ptr [esp + 8]
// 00423e74  56                   push esi
// 00423e75  50                   push eax
// 00423e76  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00423e7a  8b10                 mov edx, dword ptr [eax]
// 00423e7c  83ec08               sub esp, 8
// 00423e7f  8bf1                 mov esi, ecx
// 00423e81  8bcc                 mov ecx, esp
// 00423e83  8911                 mov dword ptr [ecx], edx
// 00423e85  8b4004               mov eax, dword ptr [eax + 4]
// 00423e88  85c0                 test eax, eax
// 00423e8a  89642418             mov dword ptr [esp + 0x18], esp
// 00423e8e  894104               mov dword ptr [ecx + 4], eax
// 00423e91  740c                 je 0x423e9f
// 00423e93  83c004               add eax, 4
// 00423e96  b901000000           mov ecx, 1
// 00423e9b  f00fc108             lock xadd dword ptr [eax], ecx
// 00423e9f  6a00                 push 0
// 00423ea1  8bce                 mov ecx, esi
// 00423ea3  e898f7ffff           call 0x423640
// 00423ea8  804e2c02             or byte ptr [esi + 0x2c], 2
// 00423eac  c706a8877800         mov dword ptr [esi], 0x7887a8
// 00423eb2  c746049c877800       mov dword ptr [esi + 4], 0x78879c
// 00423eb9  c7460890877800       mov dword ptr [esi + 8], 0x788790
// 00423ec0  8bc6                 mov eax, esi
// 00423ec2  5e                   pop esi
// 00423ec3  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxTreeCtrlNode
{
    void* vptr0;
    void* vptr1;
    void* vptr2;
    char pad[0x20];
    unsigned char flags;

    void construct(void* a, int b);
};

void CRobloxTreeCtrlNode::construct(void* a, int b)
{
    void* src = a;
    void* p = *(void**)src;
    void* q = *(void**)((char*)src + 4);
    if (q != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }
    void* local[2];
    local[0] = p;
    local[1] = q;
    void* arg = local;
    (*(void (__thiscall**)(CRobloxTreeCtrlNode*, void*, int))(*(void***)this))(
        this, arg, 0);
    flags |= 2;
    vptr0 = (void*)0x7887a8;
    vptr1 = (void*)0x78879c;
    vptr2 = (void*)0x788790;
}
