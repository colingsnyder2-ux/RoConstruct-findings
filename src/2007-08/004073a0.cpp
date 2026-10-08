// from server: 100% by colin
// roc 2007-08 004073a0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004073a0
//
// 004073a0  8b442404             mov eax, dword ptr [esp + 4]
// 004073a4  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 004073aa  6a00                 push 0
// 004073ac  50                   push eax
// 004073ad  6a6a                 push 0x6a
// 004073af  51                   push ecx
// 004073b0  e8dbfbffff           call 0x406f90
// 004073b5  c20400               ret 4

extern int G;

void __stdcall sub_406f90(int, int, int, int);

void __stdcall func_004073a0(int a)
{
    sub_406f90(G, 0x6a, a, 0);
}
