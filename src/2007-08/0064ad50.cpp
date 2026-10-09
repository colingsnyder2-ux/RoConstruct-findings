// from server: 90% by colin
// roc 2007-08 0064ad50  unit: PAVCXTPImageManagerImageList::?$CArray  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ad50
//
// 0064ad50  56                   push esi
// 0064ad51  8bf1                 mov esi, ecx
// 0064ad53  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064ad56  f7d0                 not eax
// 0064ad58  a801                 test al, 1
// 0064ad5a  7511                 jne 0x64ad6d
// 0064ad5c  8d4e14               lea ecx, [esi + 0x14]
// 0064ad5f  ff1598dd7700         call dword ptr [0x77dd98]
// 0064ad65  50                   push eax
// 0064ad66  6a02                 push 2
// 0064ad68  e81b59feff           call 0x630688
// 0064ad6d  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0064ad70  83c104               add ecx, 4
// 0064ad73  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 0064ad76  7607                 jbe 0x64ad7f
// 0064ad78  8bce                 mov ecx, esi
// 0064ad7a  e8abd60e00           call 0x73842a
// 0064ad7f  8b5628               mov edx, dword ptr [esi + 0x28]
// 0064ad82  8b442408             mov eax, dword ptr [esp + 8]
// 0064ad86  8902                 mov dword ptr [edx], eax
// 0064ad88  83462804             add dword ptr [esi + 0x28], 4
// 0064ad8c  8bc6                 mov eax, esi
// 0064ad8e  5e                   pop esi
// 0064ad8f  c20400               ret 4

struct PAVCXTPImageManagerImageList_CArray
{
    char pad0[0x14];
    int field14;
    int field18;
    char pad1c[0xc];
    int field28;
    int field2c;
    PAVCXTPImageManagerImageList_CArray* Add(int);
};

extern "C" int __stdcall sub_77dd98();
extern "C" void __cdecl sub_630688(int, int);
extern "C" void __fastcall sub_73842a(void*);

PAVCXTPImageManagerImageList_CArray* PAVCXTPImageManagerImageList_CArray::Add(int value)
{
    if ((~field18 & 1) == 0)
    {
        int r = sub_77dd98();
        sub_630688(2, r);
    }
    if ((unsigned int)(field28 + 4) > (unsigned int)field2c)
        sub_73842a(this);
    *(int*)field28 = value;
    field28 += 4;
    return this;
}
