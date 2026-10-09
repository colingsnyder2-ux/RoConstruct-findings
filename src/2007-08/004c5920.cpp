// from server: 100% by colin
// roc 2007-08 004c5920  unit: RakPeer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5920
//
// 004c5920  56                   push esi
// 004c5921  57                   push edi
// 004c5922  8bf1                 mov esi, ecx
// 004c5924  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c5928  8d44240c             lea eax, [esp + 0xc]
// 004c592c  50                   push eax
// 004c592d  51                   push ecx
// 004c592e  8bce                 mov ecx, esi
// 004c5930  e8abf7ffff           call 0x4c50e0
// 004c5935  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004c593a  8bf8                 mov edi, eax
// 004c593c  7408                 je 0x4c5946
// 004c593e  5f                   pop edi
// 004c593f  83c8ff               or eax, 0xffffffff
// 004c5942  5e                   pop esi
// 004c5943  c20800               ret 8
// 004c5946  3b7e04               cmp edi, dword ptr [esi + 4]
// 004c5949  7219                 jb 0x4c5964
// 004c594b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c594f  8b02                 mov eax, dword ptr [edx]
// 004c5951  50                   push eax
// 004c5952  8bce                 mov ecx, esi
// 004c5954  e88739ffff           call 0x4b92e0
// 004c5959  8b4604               mov eax, dword ptr [esi + 4]
// 004c595c  5f                   pop edi
// 004c595d  83e801               sub eax, 1
// 004c5960  5e                   pop esi
// 004c5961  c20800               ret 8
// 004c5964  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c5968  8b11                 mov edx, dword ptr [ecx]
// 004c596a  57                   push edi
// 004c596b  52                   push edx
// 004c596c  8bce                 mov ecx, esi
// 004c596e  e8fdf7ffff           call 0x4c5170
// 004c5973  8bc7                 mov eax, edi
// 004c5975  5f                   pop edi
// 004c5976  5e                   pop esi
// 004c5977  c20800               ret 8

struct RakPeer {
    int field0;
    unsigned int field4;
    int sub_4c50e0(int, char*);
    int sub_4c5170(int, int);
    int sub_4b92e0(int);
    int func_004c5920(int, int);
};

int RakPeer::func_004c5920(int a1, int a2)
{
    char local;
    int result;
    int idx;

    idx = sub_4c50e0(a1, &local);
    result = idx;
    if (local != 0) {
        return -1;
    }
    if ((unsigned int)result >= field4) {
        sub_4b92e0(*(int*)a2);
        return field4 - 1;
    }
    sub_4c5170(*(int*)a2, result);
    return result;
}
