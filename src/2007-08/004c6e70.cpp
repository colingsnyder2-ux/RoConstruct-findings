// from server: 100% by colin
// roc 2007-08 004c6e70  unit: RakPeer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c6e70
//
// 004c6e70  56                   push esi
// 004c6e71  57                   push edi
// 004c6e72  8bf1                 mov esi, ecx
// 004c6e74  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c6e78  8d44240c             lea eax, [esp + 0xc]
// 004c6e7c  50                   push eax
// 004c6e7d  51                   push ecx
// 004c6e7e  8bce                 mov ecx, esi
// 004c6e80  e86bffffff           call 0x4c6df0
// 004c6e85  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004c6e8a  8bf8                 mov edi, eax
// 004c6e8c  7408                 je 0x4c6e96
// 004c6e8e  5f                   pop edi
// 004c6e8f  83c8ff               or eax, 0xffffffff
// 004c6e92  5e                   pop esi
// 004c6e93  c20800               ret 8
// 004c6e96  3b7e04               cmp edi, dword ptr [esi + 4]
// 004c6e99  7219                 jb 0x4c6eb4
// 004c6e9b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c6e9f  8b02                 mov eax, dword ptr [edx]
// 004c6ea1  50                   push eax
// 004c6ea2  8bce                 mov ecx, esi
// 004c6ea4  e83724ffff           call 0x4b92e0
// 004c6ea9  8b4604               mov eax, dword ptr [esi + 4]
// 004c6eac  5f                   pop edi
// 004c6ead  83e801               sub eax, 1
// 004c6eb0  5e                   pop esi
// 004c6eb1  c20800               ret 8
// 004c6eb4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c6eb8  8b11                 mov edx, dword ptr [ecx]
// 004c6eba  57                   push edi
// 004c6ebb  52                   push edx
// 004c6ebc  8bce                 mov ecx, esi
// 004c6ebe  e8ade2ffff           call 0x4c5170
// 004c6ec3  8bc7                 mov eax, edi
// 004c6ec5  5f                   pop edi
// 004c6ec6  5e                   pop esi
// 004c6ec7  c20800               ret 8

struct RakPeer {
    int field0;
    unsigned int field4;
    int sub_4c6df0(int, char*);
    int sub_4c5170(int, int);
    int sub_4b92e0(int);
    int func_004c6e70(int, int);
};

int RakPeer::func_004c6e70(int a1, int a2)
{
    char local;
    int result;
    int idx;

    idx = sub_4c6df0(a1, &local);
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
