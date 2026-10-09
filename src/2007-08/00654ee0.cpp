// from server: 19% by colin
// roc 2007-08 00654ee0  unit: CInstanceRecord::CNameItem  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654ee0
//
// 00654ee0  6aff                 push -1
// 00654ee2  68fa047600           push 0x7604fa
// 00654ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00654eed  50                   push eax
// 00654eee  51                   push ecx
// 00654eef  a188518b00           mov eax, dword ptr [0x8b5188]
// 00654ef4  33c4                 xor eax, esp
// 00654ef6  50                   push eax
// 00654ef7  8d442408             lea eax, [esp + 8]
// 00654efb  64a300000000         mov dword ptr fs:[0], eax
// 00654f01  6a7c                 push 0x7c
// 00654f03  e888feffff           call 0x654d90
// 00654f08  89442404             mov dword ptr [esp + 4], eax
// 00654f0c  85c0                 test eax, eax
// 00654f0e  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00654f16  7417                 je 0x654f2f
// 00654f18  8bc8                 mov ecx, eax
// 00654f1a  e821f0ffff           call 0x653f40
// 00654f1f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00654f23  64890d00000000       mov dword ptr fs:[0], ecx
// 00654f2a  59                   pop ecx
// 00654f2b  83c410               add esp, 0x10
// 00654f2e  c3                   ret 
// 00654f2f  33c0                 xor eax, eax
// 00654f31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00654f35  64890d00000000       mov dword ptr fs:[0], ecx
// 00654f3c  59                   pop ecx
// 00654f3d  83c410               add esp, 0x10
// 00654f40  c3                   ret 

struct CNameItem {
    void* field_0;
    void* field_4;
    void* field_8;
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    void* field_20;
    void* field_24;
    void* field_28;
    void* field_2c;
    void* field_30;
    void* field_34;
    void* field_38;
    void* field_3c;
    void* field_40;
    void* field_44;
    void* field_48;
    void* field_4c;
    void* field_50;
    void* field_54;
    void* field_58;
    void* field_5c;
    void* field_60;
    void* field_64;
    void* field_68;
    void* field_6c;
    void* field_70;
    void* field_74;
    void* field_78;
    void construct();
};

extern void* __cdecl sub_654D90(unsigned int size);

void CNameItem::construct()
{
    this->field_0 = 0;
}

void* __cdecl sub_654EE0()
{
    CNameItem* result = (CNameItem*)sub_654D90(0x7c);
    if (result == 0) {
        result->construct();
    }
    return result;
}
