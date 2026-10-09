// from server: 100% by colin
// roc 2007-08 00635f20  unit: CPatchedControlComboBox  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635f20
//
// 00635f20  8b442404             mov eax, dword ptr [esp + 4]
// 00635f24  85c0                 test eax, eax
// 00635f26  56                   push esi
// 00635f27  8bf1                 mov esi, ecx
// 00635f29  89867c010000         mov dword ptr [esi + 0x17c], eax
// 00635f2f  7420                 je 0x635f51
// 00635f31  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 00635f38  7534                 jne 0x635f6e
// 00635f3a  8b06                 mov eax, dword ptr [esi]
// 00635f3c  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00635f42  ffd2                 call edx
// 00635f44  898678010000         mov dword ptr [esi + 0x178], eax
// 00635f4a  89705c               mov dword ptr [eax + 0x5c], esi
// 00635f4d  5e                   pop esi
// 00635f4e  c20400               ret 4
// 00635f51  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00635f57  85c9                 test ecx, ecx
// 00635f59  7413                 je 0x635f6e
// 00635f5b  8b01                 mov eax, dword ptr [ecx]
// 00635f5d  8b5004               mov edx, dword ptr [eax + 4]
// 00635f60  6a01                 push 1
// 00635f62  ffd2                 call edx
// 00635f64  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 00635f6e  5e                   pop esi
// 00635f6f  c20400               ret 4

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
