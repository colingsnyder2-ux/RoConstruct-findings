// from server: 93% by atomic.potato
// roc 2010-06 006f78a0  unit: RBX::VFrame::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f78a0
//
// 006f78a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f78a4  33c9                 xor ecx, ecx
// 006f78a6  3bc1                 cmp eax, ecx
// 006f78a8  7441                 je 0x6f78eb
// 006f78aa  83f801               cmp eax, 1
// 006f78ad  743c                 je 0x6f78eb
// 006f78af  83f802               cmp eax, 2
// 006f78b2  744d                 je 0x6f7901
// 006f78b4  83f803               cmp eax, 3
// 006f78b7  7521                 jne 0x6f78da
// 006f78b9  56                   push esi
// 006f78ba  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f78be  8b0e                 mov ecx, dword ptr [esi]
// 006f78c0  6818e3bd00           push 0xbde318
// 006f78c5  ff15d8a89e00         call dword ptr [0x9ea8d8]
// 006f78cb  0fb6c0               movzx eax, al
// 006f78ce  f7d8                 neg eax
// 006f78d0  1bc0                 sbb eax, eax
// 006f78d2  23442408             and eax, dword ptr [esp + 8]
// 006f78d6  8906                 mov dword ptr [esi], eax
// 006f78d8  5e                   pop esi
// 006f78d9  c3                   ret 
// 006f78da  8b442408             mov eax, dword ptr [esp + 8]
// 006f78de  c70018e3bd00         mov dword ptr [eax], 0xbde318
// 006f78e4  884804               mov byte ptr [eax + 4], cl
// 006f78e7  884805               mov byte ptr [eax + 5], cl
// 006f78ea  c3                   ret 
// 006f78eb  8b442408             mov eax, dword ptr [esp + 8]
// 006f78ef  3bc1                 cmp eax, ecx
// 006f78f1  740e                 je 0x6f7901
// 006f78f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f78f7  8b11                 mov edx, dword ptr [ecx]
// 006f78f9  8910                 mov dword ptr [eax], edx
// 006f78fb  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f78fe  894804               mov dword ptr [eax + 4], ecx
// 006f7901  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void __cdecl f(int a1, void* a2, int a3) {
    if (a3 == 0 || a3 == 1) {
        if (a2 != 0) {
            *(int*)a2 = *(int*)a1;
            *(int*)((char*)a2 + 4) = *(int*)(a1 + 4);
        }
        return;
    }
    if (a3 == 2) {
        return;
    }
    if (a3 == 3) {
        int* p = (int*)a2;
        int v = *p;
        bool r = ((const type_info*)v)->operator==(*(const type_info*)0xbde318);
        *p = r ? 0 : a1;
        return;
    }
    *(int*)a2 = 0xbde318;
    *((char*)a2 + 4) = 0;
    *((char*)a2 + 5) = 0;
}
