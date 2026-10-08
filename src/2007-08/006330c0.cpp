// from server: 100% by colin
// roc 2007-08 006330c0  unit: MyXTPCommandBars  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006330c0
//
// 006330c0  6a01                 push 1
// 006330c2  e8d9f8ffff           call 0x6329a0
// 006330c7  50                   push eax
// 006330c8  e8c3280700           call 0x6a5990
// 006330cd  50                   push eax
// 006330ce  e82fd1ffff           call 0x630202
// 006330d3  83c408               add esp, 8
// 006330d6  c3                   ret 

extern "C" int __stdcall sub_006329A0(int);
extern "C" int __cdecl sub_006A5990(int);
extern "C" int __cdecl sub_00630202(int);

void sub_006330C0()
{
    sub_00630202(sub_006A5990(sub_006329A0(1)));
}
