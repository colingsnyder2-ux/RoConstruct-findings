// from server: 100% by king_originala
// roc 2008-06 00553620  unit: RBX::RenderBase::AggregateChunk  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553620
//
// 00553620  55                   push ebp
// 00553621  8bec                 mov ebp, esp
// 00553623  51                   push ecx
// 00553624  894dfc               mov dword ptr [ebp - 4], ecx
// 00553627  68f0a26000           push 0x60a2f0
// 0055362c  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0055362f  e8fc010000           call 0x553830
// 00553634  50                   push eax
// 00553635  6a00                 push 0
// 00553637  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0055363a  50                   push eax
// 0055363b  e8f08fffff           call 0x54c630
// 00553640  83c408               add esp, 8
// 00553643  8bc8                 mov ecx, eax
// 00553645  e8c6010000           call 0x553810
// 0055364a  8be5                 mov esp, ebp
// 0055364c  5d                   pop ebp
// 0055364d  c21000               ret 0x10

extern char data_0060a2f0;

struct Source
{
    int func_00553830(void *);
};

struct Result
{
    void func_00553810(int);
};

extern Result *__cdecl func_0054c630(int, int);

struct S
{
    void func_00553620(int, int, Source *, int);
};

#pragma optimize("", off)
void S::func_00553620(int, int value, Source *source, int)
{
    func_0054c630(value, 0)->func_00553810(
        source->func_00553830(&data_0060a2f0));
}
#pragma optimize("", on)
