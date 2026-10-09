// from server: 96% by colin
// roc 2007-08 00421090  unit: CSelectionTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00421090
//
// 00421090  6a18                 push 0x18
// 00421092  e85fee2000           call 0x62fef6
// 00421097  83c404               add esp, 4
// 0042109a  85c0                 test eax, eax
// 0042109c  743e                 je 0x4210dc
// 0042109e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004210a2  8b542408             mov edx, dword ptr [esp + 8]
// 004210a6  8908                 mov dword ptr [eax], ecx
// 004210a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004210ac  894808               mov dword ptr [eax + 8], ecx
// 004210af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004210b3  895004               mov dword ptr [eax + 4], edx
// 004210b6  8b11                 mov edx, dword ptr [ecx]
// 004210b8  89500c               mov dword ptr [eax + 0xc], edx
// 004210bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004210be  85c9                 test ecx, ecx
// 004210c0  894810               mov dword ptr [eax + 0x10], ecx
// 004210c3  740c                 je 0x4210d1
// 004210c5  83c104               add ecx, 4
// 004210c8  ba01000000           mov edx, 1
// 004210cd  f00fc111             lock xadd dword ptr [ecx], edx
// 004210d1  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 004210d5  884814               mov byte ptr [eax + 0x14], cl
// 004210d8  c6401500             mov byte ptr [eax + 0x15], 0
// 004210dc  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl malloc(unsigned int);

struct CSelectionTreeCtrl {
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    char field_14;
    char field_15;
};

CSelectionTreeCtrl* __stdcall sub_421090(void* a, void* b, void* c, void* d, char e)
{
    CSelectionTreeCtrl* p = (CSelectionTreeCtrl*)malloc(0x18);
    if (p != 0)
    {
        p->field_0 = a;
        p->field_4 = b;
        p->field_8 = c;
        p->field_c = *(void**)d;
        void* ref = *(void**)((char*)d + 4);
        p->field_10 = ref;
        if (ref != 0)
        {
            _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
        }
        p->field_14 = e;
        p->field_15 = 0;
    }
    return p;
}
