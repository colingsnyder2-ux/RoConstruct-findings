// roc 2009-12 00815000  unit: MyXTPCommandBars  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815000
//
// 00815000  53                   push ebx
// 00815001  56                   push esi
// 00815002  8bf1                 mov esi, ecx
// 00815004  57                   push edi
// 00815005  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 0081500b  33d2                 xor edx, edx
// 0081500d  85ff                 test edi, edi
// 0081500f  7e15                 jle 0x815026
// 00815011  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00815015  52                   push edx
// 00815016  8bce                 mov ecx, esi
// 00815018  e8c3fcffff           call 0x814ce0
// 0081501d  3bc3                 cmp eax, ebx
// 0081501f  740e                 je 0x81502f
// 00815021  42                   inc edx
// 00815022  3bd7                 cmp edx, edi
// 00815024  7cef                 jl 0x815015
// 00815026  5f                   pop edi
// 00815027  5e                   pop esi
// 00815028  83c8ff               or eax, 0xffffffff
// 0081502b  5b                   pop ebx
// 0081502c  c20400               ret 4
// 0081502f  5f                   pop edi
// 00815030  5e                   pop esi
// 00815031  8bc2                 mov eax, edx
// 00815033  5b                   pop ebx
// 00815034  c20400               ret 4
// copied from an identical function in another client (function ?FindIndex@CXTPCommandBars@@QBEHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp