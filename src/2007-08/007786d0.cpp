// from server: 82% by colin
// roc 2007-08 007786d0  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007786d0
//
// 007786d0  51                   push ecx
// 007786d1  68f4e28b00           push 0x8be2f4
// 007786d6  68808d4900           push 0x498d80
// 007786db  c705c4f68800f0be7900 mov dword ptr [0x88f6c4], 0x79bef0
// 007786e5  e836cefaff           call 0x725520
// 007786ea  83c408               add esp, 8
// 007786ed  e80e06d2ff           call 0x498d00
// 007786f2  890424               mov dword ptr [esp], eax
// 007786f5  8d0424               lea eax, [esp]
// 007786f8  50                   push eax
// 007786f9  e812edc8ff           call 0x407410
// 007786fe  8bc8                 mov ecx, eax
// 00778700  e81bebc8ff           call 0x407220
// 00778705  59                   pop ecx
// 00778706  c3                   ret

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_498d00();
extern "C" void* __cdecl sub_407410(void**);

struct C407220 {
    void method();
};

void __cdecl sub_7786d0()
{
    *(void**)0x88f6c4 = (void*)0x79bef0;
    sub_725520((const char*)0x498d80, (const char*)0x8be2f4);
    void* p = sub_498d00();
    C407220* q = (C407220*)sub_407410(&p);
    q->method();
}
