// from server: 60% by colin
// roc 2007-08 00661880  unit: PAVCXTPReportRecord::?$CArray  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661880
//
// 00661880  53                   push ebx
// 00661881  56                   push esi
// 00661882  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00661886  8bd9                 mov ebx, ecx
// 00661888  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 0066188b  7d2b                 jge 0x6618b8
// 0066188d  85f6                 test esi, esi
// 0066188f  57                   push edi
// 00661890  8d7b20               lea edi, [ebx + 0x20]
// 00661893  7c28                 jl 0x6618bd
// 00661895  3b7708               cmp esi, dword ptr [edi + 8]
// 00661898  7d23                 jge 0x6618bd
// 0066189a  8b4704               mov eax, dword ptr [edi + 4]
// 0066189d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006618a0  e83fe9fcff           call 0x6301e4
// 006618a5  6a01                 push 1
// 006618a7  56                   push esi
// 006618a8  8bcf                 mov ecx, edi
// 006618aa  e8010e0700           call 0x6d26b0
// 006618af  56                   push esi
// 006618b0  8bcb                 mov ecx, ebx
// 006618b2  e869ffffff           call 0x661820
// 006618b7  5f                   pop edi
// 006618b8  5e                   pop esi
// 006618b9  5b                   pop ebx
// 006618ba  c20400               ret 4
// 006618bd  e85ee6fcff           call 0x62ff20

struct CArray {
    int f(int);
};

extern "C" void __cdecl func_0062ff20();
extern "C" void __cdecl func_006301e4();
extern "C" void __cdecl func_00661820();
extern "C" void __cdecl func_006d26b0();

int CArray::f(int index)
{
    if (index >= *(int*)((char*)this + 0x28))
        return 0;
    if (index < 0)
        func_0062ff20();
    if (index >= *(int*)((char*)this + 0x28))
        func_0062ff20();
    int* arr = *(int**)((char*)this + 0x24);
    int elem = arr[index];
    func_006301e4();
    func_006d26b0();
    func_00661820();
    return 0;
}
