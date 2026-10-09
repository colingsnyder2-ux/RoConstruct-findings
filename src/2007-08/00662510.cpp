// from server: 59% by colin
// roc 2007-08 00662510  unit: CXTPReportRecordItemDateTime  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662510
//
// 00662510  51                   push ecx
// 00662511  56                   push esi
// 00662512  8bf1                 mov esi, ecx
// 00662514  57                   push edi
// 00662515  8d7e60               lea edi, [esi + 0x60]
// 00662518  8bcf                 mov ecx, edi
// 0066251a  c744240800000000     mov dword ptr [esp + 8], 0
// 00662522  ff15d0dc7700         call dword ptr [0x77dcd0]
// 00662528  84c0                 test al, al
// 0066252a  7515                 jne 0x662541
// 0066252c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00662530  57                   push edi
// 00662531  8bce                 mov ecx, esi
// 00662533  ff1574dd7700         call dword ptr [0x77dd74]
// 00662539  5f                   pop edi
// 0066253a  8bc6                 mov eax, esi
// 0066253c  5e                   pop esi
// 0066253d  59                   pop ecx
// 0066253e  c20800               ret 8
// 00662541  8d4e40               lea ecx, [esi + 0x40]
// 00662544  ff1598dd7700         call dword ptr [0x77dd98]
// 0066254a  50                   push eax
// 0066254b  83c67c               add esi, 0x7c
// 0066254e  56                   push esi
// 0066254f  8b742418             mov esi, dword ptr [esp + 0x18]
// 00662553  56                   push esi
// 00662554  e8f7beffff           call 0x65e450
// 00662559  83c40c               add esp, 0xc
// 0066255c  5f                   pop edi
// 0066255d  8bc6                 mov eax, esi
// 0066255f  5e                   pop esi
// 00662560  59                   pop ecx
// 00662561  c20800               ret 8

struct CXTPReportRecordItemDateTime {
    char pad[0x60];
    int field60;
    char pad2[0x18];
    int field7c;
    int func(int, int);
};

extern "C" int __stdcall sub_77DCD0(int*);
extern "C" int __stdcall sub_77DD74(int*, int*);
extern "C" int __stdcall sub_77DD98(int*);
extern "C" int __cdecl sub_65E450(int*, int*, int*);

int CXTPReportRecordItemDateTime::func(int a, int b)
{
    int local = 0;
    if (sub_77DCD0(&this->field60) == 0) {
        sub_77DD74(&this->field60, &a);
        return a;
    }
    int* p = (int*)sub_77DD98((int*)((char*)this + 0x40));
    sub_65E450(&a, (int*)((char*)this + 0x7c), p);
    return a;
}
