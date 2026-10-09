// from server: 85% by colin
// roc 2007-08 00685a70  unit: CInstanceRecord::CNameItem  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685a70
//
// 00685a70  56                   push esi
// 00685a71  8bf1                 mov esi, ecx
// 00685a73  8b4618               mov eax, dword ptr [esi + 0x18]
// 00685a76  f7d0                 not eax
// 00685a78  a801                 test al, 1
// 00685a7a  7511                 jne 0x685a8d
// 00685a7c  8d4e14               lea ecx, [esi + 0x14]
// 00685a7f  ff1598dd7700         call dword ptr [0x77dd98]
// 00685a85  50                   push eax
// 00685a86  6a02                 push 2
// 00685a88  e8fbabfaff           call 0x630688
// 00685a8d  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00685a90  83c108               add ecx, 8
// 00685a93  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 00685a96  7607                 jbe 0x685a9f
// 00685a98  8bce                 mov ecx, esi
// 00685a9a  e88b290b00           call 0x73842a
// 00685a9f  8b5628               mov edx, dword ptr [esi + 0x28]
// 00685aa2  dd442408             fld qword ptr [esp + 8]
// 00685aa6  dd1a                 fstp qword ptr [edx]
// 00685aa8  83462808             add dword ptr [esi + 0x28], 8
// 00685aac  8bc6                 mov eax, esi
// 00685aae  5e                   pop esi
// 00685aaf  c20800               ret 8

struct CNameItem {
    char pad0[0x18];
    int field18;
    char pad1c[0xc];
    int field28;
    int field2c;
    CNameItem* append(double value);
};

extern "C" int __stdcall sub_00630688(int, int);
extern "C" void __stdcall sub_0073842a();
extern "C" int __stdcall sub_0077dd98();

CNameItem* CNameItem::append(double value)
{
    if (!(~field18 & 1)) {
        int r = sub_0077dd98();
        sub_00630688(2, r);
    }
    int p = field28 + 8;
    if ((unsigned int)p > (unsigned int)field2c) {
        sub_0073842a();
    }
    *(double*)field28 = value;
    field28 += 8;
    return this;
}
