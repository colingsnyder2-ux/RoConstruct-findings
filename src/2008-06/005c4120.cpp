// from server: 100% by king_originala
// roc 2008-06 005c4120  unit: RBX::Profiling::Profiler  size: 425 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4120
//
// 005c4120  55                   push ebp
// 005c4121  8bec                 mov ebp, esp
// 005c4123  83e4f8               and esp, 0xfffffff8
// 005c4126  d9ee                 fldz 
// 005c4128  83ec14               sub esp, 0x14
// 005c412b  833d9494970000       cmp dword ptr [0x979494], 0
// 005c4132  53                   push ebx
// 005c4133  56                   push esi
// 005c4134  8b7508               mov esi, dword ptr [ebp + 8]
// 005c4137  dd16                 fst qword ptr [esi]
// 005c4139  57                   push edi
// 005c413a  dd5e08               fstp qword ptr [esi + 8]
// 005c413d  8bf9                 mov edi, ecx
// 005c413f  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005c4146  0f8472010000         je 0x5c42be
// 005c414c  dd450c               fld qword ptr [ebp + 0xc]
// 005c414f  8b4710               mov eax, dword ptr [edi + 0x10]
// 005c4152  d9c0                 fld st(0)
// 005c4154  05ff070000           add eax, 0x7ff
// 005c4159  dc7708               fdiv qword ptr [edi + 8]
// 005c415c  89442410             mov dword ptr [esp + 0x10], eax
// 005c4160  c744241cfe070000     mov dword ptr [esp + 0x1c], 0x7fe
// 005c4168  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005c4170  e87bd60d00           call 0x6a17f0
// 005c4175  89442418             mov dword ptr [esp + 0x18], eax
// 005c4179  83f801               cmp eax, 1
// 005c417c  8d442414             lea eax, [esp + 0x14]
// 005c4180  7c04                 jl 0x5c4186
// 005c4182  8d442418             lea eax, [esp + 0x18]
// 005c4186  8b00                 mov eax, dword ptr [eax]
// 005c4188  89442418             mov dword ptr [esp + 0x18], eax
// 005c418c  3dfe070000           cmp eax, 0x7fe
// 005c4191  8d44241c             lea eax, [esp + 0x1c]
// 005c4195  7704                 ja 0x5c419b
// 005c4197  8d442418             lea eax, [esp + 0x18]
// 005c419b  8b18                 mov ebx, dword ptr [eax]
// 005c419d  33d2                 xor edx, edx
// 005c419f  83fb04               cmp ebx, 4
// 005c41a2  0f8cd7000000         jl 0x5c427f
// 005c41a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c41ac  83c1fe               add ecx, -2
// 005c41af  8d4102               lea eax, [ecx + 2]
// 005c41b2  25ff070000           and eax, 0x7ff
// 005c41b7  40                   inc eax
// 005c41b8  8d0440               lea eax, [eax + eax*2]
// 005c41bb  dd04c7               fld qword ptr [edi + eax*8]
// 005c41be  8d04c7               lea eax, [edi + eax*8]
// 005c41c1  dc06                 fadd qword ptr [esi]
// 005c41c3  dd16                 fst qword ptr [esi]
// 005c41c5  dd4008               fld qword ptr [eax + 8]
// 005c41c8  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c41cb  dc4608               fadd qword ptr [esi + 8]
// 005c41ce  014610               add dword ptr [esi + 0x10], eax
// 005c41d1  dd5e08               fstp qword ptr [esi + 8]
// 005c41d4  d8d9                 fcomp st(1)
// 005c41d6  dfe0                 fnstsw ax
// 005c41d8  f6c401               test ah, 1
// 005c41db  0f84db000000         je 0x5c42bc
// 005c41e1  8d4101               lea eax, [ecx + 1]
// 005c41e4  25ff070000           and eax, 0x7ff
// 005c41e9  40                   inc eax
// 005c41ea  8d0440               lea eax, [eax + eax*2]
// 005c41ed  dd04c7               fld qword ptr [edi + eax*8]
// 005c41f0  8d04c7               lea eax, [edi + eax*8]
// 005c41f3  dc06                 fadd qword ptr [esi]
// 005c41f5  dd16                 fst qword ptr [esi]
// 005c41f7  dd4008               fld qword ptr [eax + 8]
// 005c41fa  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c41fd  dc4608               fadd qword ptr [esi + 8]
// 005c4200  014610               add dword ptr [esi + 0x10], eax
// 005c4203  dd5e08               fstp qword ptr [esi + 8]
// 005c4206  d8d9                 fcomp st(1)
// 005c4208  dfe0                 fnstsw ax
// 005c420a  f6c401               test ah, 1
// 005c420d  0f84a9000000         je 0x5c42bc
// 005c4213  8bc1                 mov eax, ecx
// 005c4215  25ff070000           and eax, 0x7ff
// 005c421a  40                   inc eax
// 005c421b  8d0440               lea eax, [eax + eax*2]
// 005c421e  dd04c7               fld qword ptr [edi + eax*8]
// 005c4221  8d04c7               lea eax, [edi + eax*8]
// 005c4224  dc06                 fadd qword ptr [esi]
// 005c4226  dd16                 fst qword ptr [esi]
// 005c4228  dd4008               fld qword ptr [eax + 8]
// 005c422b  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c422e  dc4608               fadd qword ptr [esi + 8]
// 005c4231  014610               add dword ptr [esi + 0x10], eax
// 005c4234  dd5e08               fstp qword ptr [esi + 8]
// 005c4237  d8d9                 fcomp st(1)
// 005c4239  dfe0                 fnstsw ax
// 005c423b  f6c401               test ah, 1
// 005c423e  747c                 je 0x5c42bc
// 005c4240  8d41ff               lea eax, [ecx - 1]
// 005c4243  25ff070000           and eax, 0x7ff
// 005c4248  40                   inc eax
// 005c4249  8d0440               lea eax, [eax + eax*2]
// 005c424c  dd04c7               fld qword ptr [edi + eax*8]
// 005c424f  8d04c7               lea eax, [edi + eax*8]
// 005c4252  dc06                 fadd qword ptr [esi]
// 005c4254  dd16                 fst qword ptr [esi]
// 005c4256  dd4008               fld qword ptr [eax + 8]
// 005c4259  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c425c  dc4608               fadd qword ptr [esi + 8]
// 005c425f  014610               add dword ptr [esi + 0x10], eax
// 005c4262  dd5e08               fstp qword ptr [esi + 8]
// 005c4265  d8d9                 fcomp st(1)
// 005c4267  dfe0                 fnstsw ax
// 005c4269  f6c401               test ah, 1
// 005c426c  744e                 je 0x5c42bc
// 005c426e  83c204               add edx, 4
// 005c4271  8d43fd               lea eax, [ebx - 3]
// 005c4274  83e904               sub ecx, 4
// 005c4277  3bd0                 cmp edx, eax
// 005c4279  0f8230ffffff         jb 0x5c41af
// 005c427f  3bd3                 cmp edx, ebx
// 005c4281  7339                 jae 0x5c42bc
// 005c4283  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c4287  2bca                 sub ecx, edx
// 005c4289  8bc1                 mov eax, ecx
// 005c428b  25ff070000           and eax, 0x7ff
// 005c4290  40                   inc eax
// 005c4291  8d0440               lea eax, [eax + eax*2]
// 005c4294  dd04c7               fld qword ptr [edi + eax*8]
// 005c4297  8d04c7               lea eax, [edi + eax*8]
// 005c429a  dc06                 fadd qword ptr [esi]
// 005c429c  dd16                 fst qword ptr [esi]
// 005c429e  dd4008               fld qword ptr [eax + 8]
// 005c42a1  8b4010               mov eax, dword ptr [eax + 0x10]
// 005c42a4  dc4608               fadd qword ptr [esi + 8]
// 005c42a7  014610               add dword ptr [esi + 0x10], eax
// 005c42aa  dd5e08               fstp qword ptr [esi + 8]
// 005c42ad  d8d9                 fcomp st(1)
// 005c42af  dfe0                 fnstsw ax
// 005c42b1  f6c401               test ah, 1
// 005c42b4  7406                 je 0x5c42bc
// 005c42b6  42                   inc edx
// 005c42b7  49                   dec ecx
// 005c42b8  3bd3                 cmp edx, ebx
// 005c42ba  72cd                 jb 0x5c4289
// 005c42bc  ddd8                 fstp st(0)
// 005c42be  5f                   pop edi
// 005c42bf  8bc6                 mov eax, esi
// 005c42c1  5e                   pop esi
// 005c42c2  5b                   pop ebx
// 005c42c3  8be5                 mov esp, ebp
// 005c42c5  5d                   pop ebp
// 005c42c6  c20c00               ret 0xc

extern int profilingEnabled;

struct Sample
{
    double elapsed;
    double value;
    unsigned int count;
};

struct Profiler
{
    char padding[8];
    double interval;
    unsigned int position;
    Sample samples[2048];

    Sample accumulate(double duration);
};

Sample Profiler::accumulate(double duration)
{
    Sample result = { 0.0, 0.0, 0 };

    if (profilingEnabled)
    {
        unsigned int start = position + 2047;
        unsigned int maximum = 2046;
        int minimum = 1;
        int requested = (int)(duration / interval);
        const int& lowerBound = requested < minimum ? minimum : requested;
        unsigned int bounded = lowerBound;
        const unsigned int& upperBound =
            bounded > maximum ? maximum : bounded;
        unsigned int limit = upperBound;

        for (unsigned int i = 0; i < limit; ++i)
        {
            const Sample& sample = samples[(start - i) & 2047];
            result.elapsed += sample.elapsed;
            result.value += sample.value;
            result.count += sample.count;
            if (result.elapsed >= duration)
                break;
        }
    }

    return result;
}
