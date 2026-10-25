// from server: 100% by king_originala
// roc 2008-06 005c4080  unit: RBX::Profiling::Profiler  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4080
//
// 005c4080  56                   push esi
// 005c4081  8bf1                 mov esi, ecx
// 005c4083  e84843f4ff           call 0x5083d0
// 005c4088  d9c0                 fld st(0)
// 005c408a  dca618c00000         fsub qword ptr [esi + 0xc018]
// 005c4090  dc5608               fcom qword ptr [esi + 8]
// 005c4093  dfe0                 fnstsw ax
// 005c4095  f6c401               test ah, 1
// 005c4098  753e                 jne 0x5c40d8
// 005c409a  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c409d  40                   inc eax
// 005c409e  25ff070000           and eax, 0x7ff
// 005c40a3  33c9                 xor ecx, ecx
// 005c40a5  384c2408             cmp byte ptr [esp + 8], cl
// 005c40a9  894610               mov dword ptr [esi + 0x10], eax
// 005c40ac  0f95c1               setne cl
// 005c40af  8d1440               lea edx, [eax + eax*2]
// 005c40b2  894cd628             mov dword ptr [esi + edx*8 + 0x28], ecx
// 005c40b6  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c40b9  40                   inc eax
// 005c40ba  8d0440               lea eax, [eax + eax*2]
// 005c40bd  dd1cc6               fstp qword ptr [esi + eax*8]
// 005c40c0  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c40c3  dd44240c             fld qword ptr [esp + 0xc]
// 005c40c7  8d0c40               lea ecx, [eax + eax*2]
// 005c40ca  dd5cce20             fstp qword ptr [esi + ecx*8 + 0x20]
// 005c40ce  dd9e18c00000         fstp qword ptr [esi + 0xc018]
// 005c40d4  5e                   pop esi
// 005c40d5  c20c00               ret 0xc
// 005c40d8  807c240800           cmp byte ptr [esp + 8], 0
// 005c40dd  740e                 je 0x5c40ed
// 005c40df  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c40e2  8d1440               lea edx, [eax + eax*2]
// 005c40e5  ff44d628             inc dword ptr [esi + edx*8 + 0x28]
// 005c40e9  8d44d628             lea eax, [esi + edx*8 + 0x28]
// 005c40ed  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c40f0  40                   inc eax
// 005c40f1  8d0440               lea eax, [eax + eax*2]
// 005c40f4  dc04c6               fadd qword ptr [esi + eax*8]
// 005c40f7  8d04c6               lea eax, [esi + eax*8]
// 005c40fa  dd18                 fstp qword ptr [eax]
// 005c40fc  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c40ff  dd44240c             fld qword ptr [esp + 0xc]
// 005c4103  8d0c40               lea ecx, [eax + eax*2]
// 005c4106  dc44ce20             fadd qword ptr [esi + ecx*8 + 0x20]
// 005c410a  8d44ce20             lea eax, [esi + ecx*8 + 0x20]
// 005c410e  dd18                 fstp qword ptr [eax]
// 005c4110  dd9e18c00000         fstp qword ptr [esi + 0xc018]
// 005c4116  5e                   pop esi
// 005c4117  c20c00               ret 0xc

extern "C" double __cdecl clockNow();

struct Profiler
{
    struct Bucket
    {
        double elapsed;
        double value;
        int count;
    };

    char reserved[8];
    double interval;
    unsigned int current;
    char padding[4];
    Bucket buckets[2048];
    double lastTime;

    void sample(bool counted, double value);
};

void Profiler::sample(bool counted, double value)
{
    double now = clockNow();
    double elapsed = now - lastTime;

    if (elapsed >= interval)
    {
        current = (current + 1) & 0x7ff;
        buckets[current].count = counted ? 1 : 0;
        buckets[current].elapsed = elapsed;
        buckets[current].value = value;
    }
    else
    {
        if (counted)
            ++buckets[current].count;
        buckets[current].elapsed += elapsed;
        buckets[current].value += value;
    }

    lastTime = now;
}
