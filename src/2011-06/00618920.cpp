// from server: 72% by atomic.potato
// roc 2011-06 00618920  unit: RBX::ScriptContext  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618920
//
// 00618920  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00618924  33c9                 xor ecx, ecx
// 00618926  3bc1                 cmp eax, ecx
// 00618928  7441                 je 0x61896b
// 0061892a  83f801               cmp eax, 1
// 0061892d  743c                 je 0x61896b
// 0061892f  83f802               cmp eax, 2
// 00618932  744d                 je 0x618981
// 00618934  83f803               cmp eax, 3
// 00618937  7521                 jne 0x61895a
// 00618939  56                   push esi
// 0061893a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061893e  8b0e                 mov ecx, dword ptr [esi]
// 00618940  6868a7c400           push 0xc4a768
// 00618945  ff15500aa400         call dword ptr [0xa40a50]
// 0061894b  0fb6c0               movzx eax, al
// 0061894e  f7d8                 neg eax
// 00618950  1bc0                 sbb eax, eax
// 00618952  23442408             and eax, dword ptr [esp + 8]
// 00618956  8906                 mov dword ptr [esi], eax
// 00618958  5e                   pop esi
// 00618959  c3                   ret 
// 0061895a  8b442408             mov eax, dword ptr [esp + 8]
// 0061895e  c70068a7c400         mov dword ptr [eax], 0xc4a768
// 00618964  884804               mov byte ptr [eax + 4], cl
// 00618967  884805               mov byte ptr [eax + 5], cl
// 0061896a  c3                   ret 
// 0061896b  8b442408             mov eax, dword ptr [esp + 8]
// 0061896f  3bc1                 cmp eax, ecx
// 00618971  740e                 je 0x618981
// 00618973  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00618977  8b11                 mov edx, dword ptr [ecx]
// 00618979  8910                 mov dword ptr [eax], edx
// 0061897b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061897e  894804               mov dword ptr [eax + 4], ecx
// 00618981  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct S {
};

void __cdecl f(int a, void* b, int c)
{
    if (a == 0 || a == 1) {
        if (b != 0) {
            *(int*)b = *(int*)c;
            *((int*)b + 1) = *((int*)c + 1);
        }
        return;
    }
    if (a == 2) {
        return;
    }
    if (a == 3) {
        int* p = (int*)b;
        int v = *p;
        if (*(type_info*)&v == *(type_info*)0xc4a768)
            *p = c;
        else
            *p = 0;
        return;
    }
    *(int*)b = 0xc4a768;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
