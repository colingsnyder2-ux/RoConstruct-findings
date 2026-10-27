// from server: 100% by coldek
// roc 2008-06 0040f570  unit: VCBrowserViewExternal::?$CComObject  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f570
//
// 0040f570  55                   push ebp
// 0040f571  8bec                 mov ebp, esp
// 0040f573  6aff                 push -1
// 0040f575  68d0d47b00           push 0x7bd4d0
// 0040f57a  64a100000000         mov eax, dword ptr fs:[0]
// 0040f580  50                   push eax
// 0040f581  64892500000000       mov dword ptr fs:[0], esp
// 0040f588  83ec0c               sub esp, 0xc
// 0040f58b  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040f58f  53                   push ebx
// 0040f590  56                   push esi
// 0040f591  57                   push edi
// 0040f592  8bf1                 mov esi, ecx
// 0040f594  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040f597  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040f59a  0f85c3000000         jne 0x40f663
// 0040f5a0  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040f5a3  8bc3                 mov eax, ebx
// 0040f5a5  2b4508               sub eax, dword ptr [ebp + 8]
// 0040f5a8  33c9                 xor ecx, ecx
// 0040f5aa  c1f802               sar eax, 2
// 0040f5ad  ba04000000           mov edx, 4
// 0040f5b2  f7e2                 mul edx
// 0040f5b4  0f90c1               seto cl
// 0040f5b7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040f5be  f7d9                 neg ecx
// 0040f5c0  0bc8                 or ecx, eax
// 0040f5c2  51                   push ecx
// 0040f5c3  e88e132900           call 0x6a0956
// 0040f5c8  83c404               add esp, 4
// 0040f5cb  894608               mov dword ptr [esi + 8], eax
// 0040f5ce  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040f5d5  eb1b                 jmp 0x40f5f2
// 0040f5d7  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040f5da  e871132900           call 0x6a0950
// 0040f5df  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040f5e6  b8ecf54000           mov eax, 0x40f5ec
// 0040f5eb  c3                   ret 
// 0040f5ec  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040f5ef  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040f5f2  8b4608               mov eax, dword ptr [esi + 8]
// 0040f5f5  894610               mov dword ptr [esi + 0x10], eax
// 0040f5f8  85c0                 test eax, eax
// 0040f5fa  7518                 jne 0x40f614
// 0040f5fc  b80e000780           mov eax, 0x8007000e
// 0040f601  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f604  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f60b  5f                   pop edi
// 0040f60c  5e                   pop esi
// 0040f60d  5b                   pop ebx
// 0040f60e  8be5                 mov esp, ebp
// 0040f610  5d                   pop ebp
// 0040f611  c21000               ret 0x10
// 0040f614  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040f617  3bfb                 cmp edi, ebx
// 0040f619  742e                 je 0x40f649
// 0040f61b  eb03                 jmp 0x40f620
// 0040f61d  8d4900               lea ecx, [ecx]
// 0040f620  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0040f623  85c9                 test ecx, ecx
// 0040f625  7432                 je 0x40f659
// 0040f627  85ff                 test edi, edi
// 0040f629  742e                 je 0x40f659
// 0040f62b  8b07                 mov eax, dword ptr [edi]
// 0040f62d  8901                 mov dword ptr [ecx], eax
// 0040f62f  85c0                 test eax, eax
// 0040f631  7408                 je 0x40f63b
// 0040f633  8b08                 mov ecx, dword ptr [eax]
// 0040f635  8b5104               mov edx, dword ptr [ecx + 4]
// 0040f638  50                   push eax
// 0040f639  ffd2                 call edx
// 0040f63b  83461004             add dword ptr [esi + 0x10], 4
// 0040f63f  83c704               add edi, 4
// 0040f642  3bfb                 cmp edi, ebx
// 0040f644  75da                 jne 0x40f620
// 0040f646  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040f649  8b4608               mov eax, dword ptr [esi + 8]
// 0040f64c  2bdf                 sub ebx, edi
// 0040f64e  c1fb02               sar ebx, 2
// 0040f651  8d0c98               lea ecx, [eax + ebx*4]
// 0040f654  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040f657  eb16                 jmp 0x40f66f
// 0040f659  6805400080           push 0x80004005
// 0040f65e  e89d19ffff           call 0x401000
// 0040f663  8b5508               mov edx, dword ptr [ebp + 8]
// 0040f666  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040f669  895608               mov dword ptr [esi + 8], edx
// 0040f66c  89460c               mov dword ptr [esi + 0xc], eax
// 0040f66f  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040f672  397e04               cmp dword ptr [esi + 4], edi
// 0040f675  741e                 je 0x40f695
// 0040f677  85ff                 test edi, edi
// 0040f679  7408                 je 0x40f683
// 0040f67b  8b0f                 mov ecx, dword ptr [edi]
// 0040f67d  8b5104               mov edx, dword ptr [ecx + 4]
// 0040f680  57                   push edi
// 0040f681  ffd2                 call edx
// 0040f683  8b4604               mov eax, dword ptr [esi + 4]
// 0040f686  85c0                 test eax, eax
// 0040f688  7408                 je 0x40f692
// 0040f68a  8b08                 mov ecx, dword ptr [eax]
// 0040f68c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040f68f  50                   push eax
// 0040f690  ffd2                 call edx
// 0040f692  897e04               mov dword ptr [esi + 4], edi
// 0040f695  8b4608               mov eax, dword ptr [esi + 8]
// 0040f698  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040f69b  894610               mov dword ptr [esi + 0x10], eax
// 0040f69e  894e14               mov dword ptr [esi + 0x14], ecx
// 0040f6a1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f6a4  5f                   pop edi
// 0040f6a5  5e                   pop esi
// 0040f6a6  33c0                 xor eax, eax
// 0040f6a8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f6af  5b                   pop ebx
// 0040f6b0  8be5                 mov esp, ebp
// 0040f6b2  5d                   pop ebp
// 0040f6b3  c21000               ret 0x10

// from server: 100% by EspClaude
// roc 2008-06 0040f570  unit: VCBrowserViewExternal::?$CComObject  size: 103 bytes

struct IUnknown {
    virtual long __stdcall QueryInterface(const void*, void**) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct CException {
    void Delete();
};

__declspec(noreturn) void __stdcall AtlThrow(long);

struct CopyInterface {
    static long copy(IUnknown** p1, IUnknown** p2)
    {
        int cond = !!(p1 != 0 && p2 != 0);
        if (!cond)
            AtlThrow((long)0x80004005);
        *p1 = *p2;
        if (*p1)
            (*p1)->AddRef();
        return 0;
    }
};

struct CComPtrUnk {
    IUnknown* p;
    IUnknown* operator=(IUnknown* lp)
    {
        if (p != lp) {
            if (lp)
                lp->AddRef();
            if (p)
                p->Release();
            p = lp;
        }
        return p;
    }
};

typedef IUnknown* Entry;

struct S {
    void* vtable;
    CComPtrUnk m_spUnk;
    Entry* m_begin;
    Entry* m_end;
    Entry* m_iter;
    unsigned long m_dwFlags;

    long Init(Entry* begin, Entry* end, IUnknown* pUnk, unsigned long flags);
};

long S::Init(Entry* begin, Entry* end, IUnknown* pUnk, unsigned long flags)
{
    if (flags == 3) {
        try {
            m_begin = new Entry[end - begin];
        }
        catch (CException* e) {
            e->Delete();
        }
        m_iter = m_begin;
        if (m_begin == 0)
            return (long)0x8007000E;
        for (Entry* i = begin; i != end; i++) {
            long hr = CopyInterface::copy(m_iter, i);
            if (hr < 0)
                return hr;
            m_iter++;
        }
        m_end = m_begin + (end - begin);
    } else {
        m_begin = begin;
        m_end = end;
    }
    m_spUnk = pUnk;
    m_iter = m_begin;
    m_dwFlags = flags;
    return 0;
}
