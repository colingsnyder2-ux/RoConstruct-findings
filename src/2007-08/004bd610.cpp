// from server: 100% by colin
// roc 2007-08 004bd610  unit: RakPeer  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bd610
//
// 004bd610  56                   push esi
// 004bd611  57                   push edi
// 004bd612  8bf1                 mov esi, ecx
// 004bd614  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bd618  8d44240c             lea eax, [esp + 0xc]
// 004bd61c  50                   push eax
// 004bd61d  51                   push ecx
// 004bd61e  8bce                 mov ecx, esi
// 004bd620  e8dbd4ffff           call 0x4bab00
// 004bd625  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004bd62a  8bf8                 mov edi, eax
// 004bd62c  7507                 jne 0x4bd635
// 004bd62e  5f                   pop edi
// 004bd62f  33c0                 xor eax, eax
// 004bd631  5e                   pop esi
// 004bd632  c20400               ret 4
// 004bd635  57                   push edi
// 004bd636  8bce                 mov ecx, esi
// 004bd638  e833d7ffff           call 0x4bad70
// 004bd63d  8bc7                 mov eax, edi
// 004bd63f  5f                   pop edi
// 004bd640  5e                   pop esi
// 004bd641  c20400               ret 4

struct RakPeer {
    int sub_4BAB00(int, char*);
    int sub_4BAD70(int);
    int func_4BD610(int);
};

int RakPeer::func_4BD610(int a)
{
    char flag;
    int result = sub_4BAB00(a, &flag);
    if (flag == 0)
        return 0;
    sub_4BAD70(result);
    return result;
}
