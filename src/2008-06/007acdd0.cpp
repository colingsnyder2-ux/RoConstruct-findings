// from server: 100% by king_originala
// roc 2008-06 007acdd0  unit: RBX::RenderNew::Material  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acdd0
//
// 007acdd0  51                   push ecx
// 007acdd1  57                   push edi
// 007acdd2  8bf9                 mov edi, ecx
// 007acdd4  8b07                 mov eax, dword ptr [edi]
// 007acdd6  8b5010               mov edx, dword ptr [eax + 0x10]
// 007acdd9  ffd2                 call edx
// 007acddb  85c0                 test eax, eax
// 007acddd  7505                 jne 0x7acde4
// 007acddf  5f                   pop edi
// 007acde0  59                   pop ecx
// 007acde1  c20400               ret 4
// 007acde4  8b4710               mov eax, dword ptr [edi + 0x10]
// 007acde7  89442404             mov dword ptr [esp + 4], eax
// 007acdeb  db442404             fild dword ptr [esp + 4]
// 007acdef  56                   push esi
// 007acdf0  8d70ff               lea esi, [eax - 1]
// 007acdf3  d84c2410             fmul dword ptr [esp + 0x10]
// 007acdf7  e8f449efff           call 0x6a17f0
// 007acdfc  85c0                 test eax, eax
// 007acdfe  7f04                 jg 0x7ace04
// 007ace00  33c0                 xor eax, eax
// 007ace02  eb06                 jmp 0x7ace0a
// 007ace04  3bc6                 cmp eax, esi
// 007ace06  7c02                 jl 0x7ace0a
// 007ace08  8bc6                 mov eax, esi
// 007ace0a  8b570c               mov edx, dword ptr [edi + 0xc]
// 007ace0d  8d0cc500000000       lea ecx, [eax*8]
// 007ace14  2bc8                 sub ecx, eax
// 007ace16  8b04ca               mov eax, dword ptr [edx + ecx*8]
// 007ace19  8d34ca               lea esi, [edx + ecx*8]
// 007ace1c  8b10                 mov edx, dword ptr [eax]
// 007ace1e  8bce                 mov ecx, esi
// 007ace20  ffd2                 call edx
// 007ace22  0fb6c0               movzx eax, al
// 007ace25  f7d8                 neg eax
// 007ace27  1bc0                 sbb eax, eax
// 007ace29  f7d0                 not eax
// 007ace2b  23c6                 and eax, esi
// 007ace2d  5e                   pop esi
// 007ace2e  5f                   pop edi
// 007ace2f  59                   pop ecx
// 007ace30  c20400               ret 4

struct Frame {
    virtual bool unavailable();
    char padding[52];
};

struct Material {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual int ready();

    char padding[8];
    Frame* frames;
    int count;

    Frame* select(float position);
};

Frame* Material::select(float position)
{
    if (!ready())
        return 0;

    int upper = count - 1;
    int index = (int)(count * position);

    if (index <= 0)
        index = 0;
    else if (index >= upper)
        index = upper;

    Frame* frame = frames + index;
    return frame->unavailable() ? 0 : frame;
}
