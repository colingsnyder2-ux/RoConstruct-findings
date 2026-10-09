// from server: 68% by colin
// roc 2007-08 006e0730  unit: CXTPDockingPaneBase  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0730
//
// 006e0730  8b442404             mov eax, dword ptr [esp + 4]
// 006e0734  53                   push ebx
// 006e0735  56                   push esi
// 006e0736  8bf1                 mov esi, ecx
// 006e0738  57                   push edi
// 006e0739  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e073d  33db                 xor ebx, ebx
// 006e073f  c7060c9b7d00         mov dword ptr [esi], 0x7d9b0c
// 006e0745  897e0c               mov dword ptr [esi + 0xc], edi
// 006e0748  894618               mov dword ptr [esi + 0x18], eax
// 006e074b  895e10               mov dword ptr [esi + 0x10], ebx
// 006e074e  e8edfdffff           call 0x6e0540
// 006e0753  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 006e0759  894e14               mov dword ptr [esi + 0x14], ecx
// 006e075c  8d561c               lea edx, [esi + 0x1c]
// 006e075f  33c0                 xor eax, eax
// 006e0761  33c9                 xor ecx, ecx
// 006e0763  52                   push edx
// 006e0764  894604               mov dword ptr [esi + 4], eax
// 006e0767  894e08               mov dword ptr [esi + 8], ecx
// 006e076a  ff1514ee7700         call dword ptr [0x77ee14]
// 006e0770  56                   push esi
// 006e0771  8d4f44               lea ecx, [edi + 0x44]
// 006e0774  895e34               mov dword ptr [esi + 0x34], ebx
// 006e0777  895e30               mov dword ptr [esi + 0x30], ebx
// 006e077a  e8f13f0000           call 0x6e4770
// 006e077f  5f                   pop edi
// 006e0780  895e2c               mov dword ptr [esi + 0x2c], ebx
// 006e0783  8bc6                 mov eax, esi
// 006e0785  5e                   pop esi
// 006e0786  5b                   pop ebx
// 006e0787  c20800               ret 8

struct CXTPDockingPaneBase
{
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    char rect[16];
    int field_2c;
    int field_30;
    int field_34;

    CXTPDockingPaneBase* __thiscall construct(int a, int b);
};

extern "C" void* __stdcall sub_006e0540();
extern "C" void __stdcall sub_006e4770(void*);
extern "C" int __stdcall SetRectEmpty(void*);

CXTPDockingPaneBase* __thiscall CXTPDockingPaneBase::construct(int a, int b)
{
    this->vtable = (void*)0x7d9b0c;
    this->field_c = b;
    this->field_18 = a;
    this->field_10 = 0;
    void* p = sub_006e0540();
    this->field_14 = *(int*)((char*)p + 0xcc);
    this->field_4 = 0;
    this->field_8 = 0;
    SetRectEmpty(this->rect);
    this->field_34 = 0;
    this->field_30 = 0;
    sub_006e4770((char*)b + 0x44);
    this->field_2c = 0;
    return this;
}
