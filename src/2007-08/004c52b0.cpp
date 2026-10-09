// from server: 75% by colin
// roc 2007-08 004c52b0  unit: RakPeer  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c52b0
//
// 004c52b0  53                   push ebx
// 004c52b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004c52b5  8b4304               mov eax, dword ptr [ebx + 4]
// 004c52b8  55                   push ebp
// 004c52b9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004c52bd  56                   push esi
// 004c52be  57                   push edi
// 004c52bf  8d78ff               lea edi, [eax - 1]
// 004c52c2  99                   cdq 
// 004c52c3  2bc2                 sub eax, edx
// 004c52c5  d1f8                 sar eax, 1
// 004c52c7  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 004c52cb  33f6                 xor esi, esi
// 004c52cd  3be9                 cmp ebp, ecx
// 004c52cf  7421                 je 0x4c52f2
// 004c52d1  7305                 jae 0x4c52d8
// 004c52d3  8d78ff               lea edi, [eax - 1]
// 004c52d6  eb03                 jmp 0x4c52db
// 004c52d8  8d7001               lea esi, [eax + 1]
// 004c52db  8bc7                 mov eax, edi
// 004c52dd  2bc6                 sub eax, esi
// 004c52df  99                   cdq 
// 004c52e0  2bc2                 sub eax, edx
// 004c52e2  d1f8                 sar eax, 1
// 004c52e4  03c6                 add eax, esi
// 004c52e6  3bf7                 cmp esi, edi
// 004c52e8  7f17                 jg 0x4c5301
// 004c52ea  8b4c8308             mov ecx, dword ptr [ebx + eax*4 + 8]
// 004c52ee  3be9                 cmp ebp, ecx
// 004c52f0  75df                 jne 0x4c52d1
// 004c52f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c52f6  5f                   pop edi
// 004c52f7  5e                   pop esi
// 004c52f8  5d                   pop ebp
// 004c52f9  8901                 mov dword ptr [ecx], eax
// 004c52fb  b001                 mov al, 1
// 004c52fd  5b                   pop ebx
// 004c52fe  c20c00               ret 0xc
// 004c5301  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c5305  5f                   pop edi
// 004c5306  8932                 mov dword ptr [edx], esi
// 004c5308  5e                   pop esi
// 004c5309  5d                   pop ebp
// 004c530a  32c0                 xor al, al
// 004c530c  5b                   pop ebx
// 004c530d  c20c00               ret 0xc

struct RakPeer {
    int field0;
    int field4;
    int field8;
    bool lookup(int key, int* outIndex);
};

bool RakPeer::lookup(int key, int* outIndex) {
    int hi = field4 - 1;
    int mid = field4 / 2;
    int lo = 0;
    int val = *(int*)((char*)this + 8 + mid * 4);
    if (key == val) {
        *outIndex = mid;
        return true;
    }
    while (lo <= hi) {
        if (key < val) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
        mid = (hi - lo) / 2 + lo;
        if (lo > hi) {
            *outIndex = lo;
            return false;
        }
        val = *(int*)((char*)this + 8 + mid * 4);
        if (key == val) {
            *outIndex = mid;
            return true;
        }
    }
    *outIndex = lo;
    return false;
}
