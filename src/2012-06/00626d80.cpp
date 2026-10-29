// roc 2012-06 00626d80  unit: seg_00620000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00626d80
//
// 00626d80  55                   push ebp
// 00626d81  8bec                 mov ebp, esp
// 00626d83  51                   push ecx
// 00626d84  894dfc               mov dword ptr [ebp - 4], ecx
// 00626d87  8b45fc               mov eax, dword ptr [ebp - 4]
// 00626d8a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00626d8d  8908                 mov dword ptr [eax], ecx
// 00626d8f  8b45fc               mov eax, dword ptr [ebp - 4]
// 00626d92  8be5                 mov esp, ebp
// 00626d94  5d                   pop ebp
// 00626d95  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    int value;
    S(int);
};

#pragma optimize("", off)
S::S(int v)
{
    value = v;
}