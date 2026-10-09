// from server: 23% by colin
// roc 2007-08 0061e760  unit: RBX::ScoreHud  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061e760
//
// 0061e760  55                   push ebp
// 0061e761  8bec                 mov ebp, esp
// 0061e763  6aff                 push -1
// 0061e765  6881ca7500           push 0x75ca81
// 0061e76a  64a100000000         mov eax, dword ptr fs:[0]
// 0061e770  50                   push eax
// 0061e771  64892500000000       mov dword ptr fs:[0], esp
// 0061e778  83ec0c               sub esp, 0xc
// 0061e77b  53                   push ebx
// 0061e77c  56                   push esi
// 0061e77d  8b7508               mov esi, dword ptr [ebp + 8]
// 0061e780  57                   push edi
// 0061e781  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0061e784  33db                 xor ebx, ebx
// 0061e786  8965f0               mov dword ptr [ebp - 0x10], esp
// 0061e789  8975ec               mov dword ptr [ebp - 0x14], esi
// 0061e78c  895dfc               mov dword ptr [ebp - 4], ebx
// 0061e78f  90                   nop 
// 0061e790  3bfb                 cmp edi, ebx
// 0061e792  7648                 jbe 0x61e7dc
// 0061e794  89750c               mov dword ptr [ebp + 0xc], esi
// 0061e797  8975e8               mov dword ptr [ebp - 0x18], esi
// 0061e79a  3bf3                 cmp esi, ebx
// 0061e79c  c645fc01             mov byte ptr [ebp - 4], 1
// 0061e7a0  740b                 je 0x61e7ad
// 0061e7a2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0061e7a5  50                   push eax
// 0061e7a6  8bce                 mov ecx, esi
// 0061e7a8  e8a3b2e0ff           call 0x429a50
// 0061e7ad  83ef01               sub edi, 1
// 0061e7b0  83c610               add esi, 0x10
// 0061e7b3  885dfc               mov byte ptr [ebp - 4], bl
// 0061e7b6  897508               mov dword ptr [ebp + 8], esi
// 0061e7b9  ebd5                 jmp 0x61e790

struct ScoreHud {
    void addScores(int count, int value);
};

void ScoreHud::addScores(int count, int value) {
    int* p = (int*)this;
    while (count > 0) {
        if (p != 0) {
            ((void (__thiscall*)(void*, int))0x429a50)(p, value);
        }
        count--;
        p += 4;
    }
}
