// from server: 60% by colin
// roc 2007-08 0054c560  unit: UString_sink::?$stream_buffer  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c560
//
// 0054c560  56                   push esi
// 0054c561  57                   push edi
// 0054c562  8bf9                 mov edi, ecx
// 0054c564  8b07                 mov eax, dword ptr [edi]
// 0054c566  8b70f4               mov esi, dword ptr [eax - 0xc]
// 0054c569  8b50f8               mov edx, dword ptr [eax - 8]
// 0054c56c  b901000000           mov ecx, 1
// 0054c571  2b48fc               sub ecx, dword ptr [eax - 4]
// 0054c574  2bd6                 sub edx, esi
// 0054c576  0bca                 or ecx, edx
// 0054c578  7d08                 jge 0x54c582
// 0054c57a  56                   push esi
// 0054c57b  8bcf                 mov ecx, edi
// 0054c57d  e8be6becff           call 0x413140
// 0054c582  8b07                 mov eax, dword ptr [edi]
// 0054c584  8d4e01               lea ecx, [esi + 1]
// 0054c587  51                   push ecx
// 0054c588  50                   push eax
// 0054c589  ff156ce87700         call dword ptr [0x77e86c]
// 0054c58f  50                   push eax
// 0054c590  e8cb8bffff           call 0x545160
// 0054c595  83c40c               add esp, 0xc
// 0054c598  85f6                 test esi, esi
// 0054c59a  7c15                 jl 0x54c5b1
// 0054c59c  8b07                 mov eax, dword ptr [edi]
// 0054c59e  3b70f8               cmp esi, dword ptr [eax - 8]
// 0054c5a1  7f0e                 jg 0x54c5b1
// 0054c5a3  8970f4               mov dword ptr [eax - 0xc], esi
// 0054c5a6  8b17                 mov edx, dword ptr [edi]
// 0054c5a8  8bc7                 mov eax, edi
// 0054c5aa  5f                   pop edi
// 0054c5ab  c6041600             mov byte ptr [esi + edx], 0
// 0054c5af  5e                   pop esi
// 0054c5b0  c3                   ret 
// 0054c5b1  6857000780           push 0x80070057
// 0054c5b6  e8454aebff           call 0x401000

struct UString_sink_stream_buffer {
    void* data;
    void write(const char* s, int n);
};

extern "C" void __stdcall sub_401000(unsigned int);
extern "C" void __stdcall sub_413140(void*, int);
extern "C" void __stdcall sub_545160(void*);
extern "C" void* __stdcall sub_77e86c(void*, int);

void UString_sink_stream_buffer::write(const char* s, int n) {
    int* p = (int*)data;
    int start = p[-3];
    int end = p[-2];
    int cap = p[-1];
    int need = 1 - cap;
    int diff = end - start;
    if ((need | diff) < 0) {
        sub_413140(this, start);
    }
    int* q = (int*)data;
    void* r = sub_77e86c(q, start + 1);
    sub_545160(r);
    if (start >= 0 && start <= q[-2]) {
        q[-3] = start;
        ((char*)data)[start] = 0;
    } else {
        sub_401000(0x80070057);
    }
}
