// roc 2007-03 006206b0  unit: seg_00620000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006206b0
//
// 006206b0  8b442404             mov eax, dword ptr [esp + 4]
// 006206b4  85c0                 test eax, eax
// 006206b6  56                   push esi
// 006206b7  8bf1                 mov esi, ecx
// 006206b9  89867c010000         mov dword ptr [esi + 0x17c], eax
// 006206bf  7420                 je 0x6206e1
// 006206c1  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006206c8  7534                 jne 0x6206fe
// 006206ca  8b06                 mov eax, dword ptr [esi]
// 006206cc  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006206d2  ffd2                 call edx
// 006206d4  898678010000         mov dword ptr [esi + 0x178], eax
// 006206da  89705c               mov dword ptr [eax + 0x5c], esi
// 006206dd  5e                   pop esi
// 006206de  c20400               ret 4
// 006206e1  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006206e7  85c9                 test ecx, ecx
// 006206e9  7413                 je 0x6206fe
// 006206eb  8b01                 mov eax, dword ptr [ecx]
// 006206ed  8b5004               mov edx, dword ptr [eax + 4]
// 006206f0  6a01                 push 1
// 006206f2  ffd2                 call edx
// 006206f4  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 006206fe  5e                   pop esi
// 006206ff  c20400               ret 4
// copied from an identical function in another client (function ?SetPacked@CPatchedControlComboBox@ns_ROCX000012@@QAEXH@Z)

namespace ns_ROCX000012 {
struct CPatchedControlComboBox
{
    void SetPacked(int);
};

void CPatchedControlComboBox::SetPacked(int a)
{
    *(int*)((char*)this + 0x17c) = a;
    if (a != 0)
    {
        if (*(int*)((char*)this + 0x178) == 0)
        {
            int* p = (int*)(*(int*(__thiscall**)(void*))(*(int*)this + 0x160))(this);
            *(int*)((char*)this + 0x178) = (int)p;
            *(int*)((char*)p + 0x5c) = (int)this;
        }
    }
    else
    {
        int* p = (int*)*(int*)((char*)this + 0x178);
        if (p != 0)
        {
            (*(void(__thiscall**)(void*, int))(*(int*)p + 4))(p, 1);
            *(int*)((char*)this + 0x178) = 0;
        }
    }
}
}
