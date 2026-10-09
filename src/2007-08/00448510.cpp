// from server: 71% by colin
// roc 2007-08 00448510  unit: CIDEDocManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00448510
//
// 00448510  57                   push edi
// 00448511  8b7c2408             mov edi, dword ptr [esp + 8]
// 00448515  85ff                 test edi, edi
// 00448517  7509                 jne 0x448522
// 00448519  b857000780           mov eax, 0x80070057
// 0044851e  5f                   pop edi
// 0044851f  c20c00               ret 0xc
// 00448522  56                   push esi
// 00448523  8b7708               mov esi, dword ptr [edi + 8]
// 00448526  3b770c               cmp esi, dword ptr [edi + 0xc]
// 00448529  b801000000           mov eax, 1
// 0044852e  732c                 jae 0x44855c
// 00448530  53                   push ebx
// 00448531  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00448535  55                   push ebp
// 00448536  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0044853a  8d9b00000000         lea ebx, [ebx]
// 00448540  85c0                 test eax, eax
// 00448542  7c16                 jl 0x44855a
// 00448544  8b0e                 mov ecx, dword ptr [esi]
// 00448546  85c9                 test ecx, ecx
// 00448548  7408                 je 0x448552
// 0044854a  53                   push ebx
// 0044854b  55                   push ebp
// 0044854c  51                   push ecx
// 0044854d  e85efeffff           call 0x4483b0
// 00448552  83c604               add esi, 4
// 00448555  3b770c               cmp esi, dword ptr [edi + 0xc]
// 00448558  72e6                 jb 0x448540
// 0044855a  5d                   pop ebp
// 0044855b  5b                   pop ebx
// 0044855c  5e                   pop esi
// 0044855d  5f                   pop edi
// 0044855e  c20c00               ret 0xc

struct CIDEDocManager {
    char pad[8];
    int* begin;
    int* end;
};

extern "C" int __stdcall sub_4483B0(int, int, int);

int __stdcall sub_448510(CIDEDocManager* mgr, int a, int b) {
    if (mgr == 0) {
        return 0x80070057;
    }
    int* p = mgr->begin;
    int result = 1;
    if (p < mgr->end) {
        do {
            if (result < 0) break;
            int v = *p;
            if (v != 0) {
                sub_4483B0(v, a, b);
            }
            p++;
        } while (p < mgr->end);
    }
    return result;
}
