// roc 2010-06 00423850  unit: ThreadLogManager  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00423850
//
// 00423850  6aff                 push -1
// 00423852  6853f89700           push 0x97f853
// 00423857  64a100000000         mov eax, dword ptr fs:[0]
// 0042385d  50                   push eax
// 0042385e  64892500000000       mov dword ptr fs:[0], esp
// 00423865  83ec08               sub esp, 8
// 00423868  56                   push esi
// 00423869  33c0                 xor eax, eax
// 0042386b  89442408             mov dword ptr [esp + 8], eax
// 0042386f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00423873  57                   push edi
// 00423874  8bf9                 mov edi, ecx
// 00423876  8b0d0808c000         mov ecx, dword ptr [0xc00808]
// 0042387c  83c104               add ecx, 4
// 0042387f  89442418             mov dword ptr [esp + 0x18], eax
// 00423883  8b01                 mov eax, dword ptr [ecx]
// 00423885  8b5004               mov edx, dword ptr [eax + 4]
// 00423888  56                   push esi
// 00423889  ffd2                 call edx
// 0042388b  8d4c2408             lea ecx, [esp + 8]
// 0042388f  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00423897  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0042389d  8b4708               mov eax, dword ptr [edi + 8]
// 004238a0  50                   push eax
// 004238a1  8d4f0c               lea ecx, [edi + 0xc]
// 004238a4  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004238ac  ff1508a49e00         call dword ptr [0x9ea408]
// 004238b2  50                   push eax
// 004238b3  8d4c2410             lea ecx, [esp + 0x10]
// 004238b7  68b044a000           push 0xa044b0
// 004238bc  51                   push ecx
// 004238bd  ff15acce9e00         call dword ptr [0x9eceac]
// 004238c3  83c410               add esp, 0x10
// 004238c6  8d4c2408             lea ecx, [esp + 8]
// 004238ca  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 004238d0  50                   push eax
// 004238d1  8bce                 mov ecx, esi
// 004238d3  ff1564a49e00         call dword ptr [0x9ea464]
// 004238d9  83e804               sub eax, 4
// 004238dc  50                   push eax
// 004238dd  8bce                 mov ecx, esi
// 004238df  ff157ca49e00         call dword ptr [0x9ea47c]
// 004238e5  8d4c2408             lea ecx, [esp + 8]
// 004238e9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 004238ef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004238f3  5f                   pop edi
// 004238f4  8bc6                 mov eax, esi
// 004238f6  5e                   pop esi
// 004238f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004238fe  83c414               add esp, 0x14
// 00423901  c20400               ret 4
// copied from an identical function in another client (function ?fileName@ThreadLogManager@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lang: cpp
// Genuine VC2008 RTM and MFC90 consumed DLL interfaces.

typedef unsigned int size_t;typedef int ptrdiff_t;
namespace std {
template<class _Elem>struct char_traits;
template<class _Ty>struct _Allocator_base {typedef _Ty value_type;};
template<class _Ty>
class allocator
		: public _Allocator_base<_Ty>
	{	
public:
	typedef _Allocator_base<_Ty> _Mybase;
	typedef typename _Mybase::value_type value_type;
	typedef value_type  *pointer;
	typedef value_type & reference;
	typedef const value_type  *const_pointer;
	typedef const value_type & const_reference;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	template<class _Other>
		struct rebind
		{	
		typedef allocator<_Other> other;
		};
allocator() throw();allocator(const allocator<_Ty>&) throw();};
class __declspec(dllimport) _Container_base_secure {};
class __declspec(dllimport) _String_base
		: public _Container_base_secure
	{	
public:
	 static void __cdecl _Xlen();	
	 static void __cdecl _Xran();	
	 static void __cdecl _Xinvarg();
	};
template<class _Ty,class _Alloc>
class _String_val
		: public _String_base
	{	
protected:
	typedef typename _Alloc::template
		rebind<_Ty>::other _Alty;
	 _String_val(_Alty _Al = _Alty())
		: _Alval(_Al)
		{	
		}
public:
	 _String_val(const _String_val &_Right)
		: _Alval(_Right._Alval)
		{	
		}
protected:
	_Alty _Alval;	
	};
template<class _Elem,class _Traits,class _Ax>
class basic_string
		: public _String_val<_Elem, _Ax>
	{	
public:
	typedef basic_string<_Elem, _Traits, _Ax> _Myt;
	typedef _String_val<_Elem, _Ax> _Mybase;
	typedef typename _Mybase::_Alty _Alloc;
	typedef typename _Alloc::size_type size_type;
	typedef typename _Alloc::difference_type _Dift;
	typedef _Dift difference_type;
	typedef typename _Alloc::pointer _Tptr;
	typedef typename _Alloc::const_pointer _Ctptr;
	typedef _Tptr pointer;
	typedef _Ctptr const_pointer;
	typedef typename _Alloc::reference _Reft;
	typedef _Reft reference;
	typedef typename _Alloc::const_reference const_reference;
	typedef typename _Alloc::value_type value_type;

basic_string();basic_string(const _Myt& _Right);~basic_string();
const _Elem * c_str() const;
size_type size() const;
_Myt& insert(size_type _Off,const _Elem *_Ptr);
enum
		{	
		_BUF_SIZE = 16 / sizeof (_Elem) < 1 ? 1
			: 16 / sizeof(_Elem)};private:
union _Bxty
		{	
		_Elem _Buf[_BUF_SIZE];
		_Elem *_Ptr;
		} _Bx;
 size_type _Mysize;	
	size_type _Myres;	
	};
typedef basic_string<char,char_traits<char>,allocator<char> >string;
template class __declspec(dllimport) allocator<char>;
template class __declspec(dllimport) _String_val<char,allocator<char> >;
template class __declspec(dllimport) basic_string<char,char_traits<char>,allocator<char> >;
}

// Consumed MFC90 RTM template interfaces, copied from atlsimpstr.h,
// cstringt.h and afxstr.h. Unconsumed APIs and DLL definitions omitted.
typedef char* LPSTR;typedef const char* LPCSTR;
typedef wchar_t* LPWSTR;typedef const wchar_t* LPCWSTR;
namespace ATL {
template<typename BaseType=char>class ChTraitsBase {
public:typedef char XCHAR;typedef LPSTR PXSTR;typedef LPCSTR PCXSTR;
typedef wchar_t YCHAR;typedef LPWSTR PYSTR;typedef LPCWSTR PCYSTR;
};
template<typename BaseType,bool t_bMFCDLL=false>class CSimpleStringT {
public:
typedef typename ChTraitsBase<BaseType>::XCHAR XCHAR;
typedef typename ChTraitsBase<BaseType>::PXSTR PXSTR;
typedef typename ChTraitsBase<BaseType>::PCXSTR PCXSTR;
typedef typename ChTraitsBase<BaseType>::YCHAR YCHAR;
typedef typename ChTraitsBase<BaseType>::PYSTR PYSTR;
typedef typename ChTraitsBase<BaseType>::PCYSTR PCYSTR;
~CSimpleStringT() throw();
operator PCXSTR() const throw();
private:PXSTR m_pszData;
};
template<typename _CharType>class ChTraitsCRT;
}
template<typename _CharType,class StringIterator=ATL::ChTraitsCRT<_CharType> >class StrTraitMFC_DLL;
namespace ATL {
namespace _CSTRING_IMPL_ {
template<typename _CharType,class StringTraits>struct _MFCDLLTraitsCheck {const static bool c_bIsMFCDLLTraits=false;};
template<typename _CharType>struct _MFCDLLTraitsCheck<_CharType,StrTraitMFC_DLL<_CharType,ATL::ChTraitsCRT<_CharType> > > {const static bool c_bIsMFCDLLTraits=true;};
}
template<typename BaseType,class StringTraits>class CStringT:
public CSimpleStringT<BaseType,_CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType,StringTraits>::c_bIsMFCDLLTraits> {
public:
typedef CSimpleStringT<BaseType,_CSTRING_IMPL_::_MFCDLLTraitsCheck<BaseType,StringTraits>::c_bIsMFCDLLTraits>CThisSimpleString;
typedef StringTraits StrTraits;
typedef typename CThisSimpleString::XCHAR XCHAR;
typedef typename CThisSimpleString::PXSTR PXSTR;
typedef typename CThisSimpleString::PCXSTR PCXSTR;
typedef typename CThisSimpleString::YCHAR YCHAR;
typedef typename CThisSimpleString::PYSTR PYSTR;
typedef typename CThisSimpleString::PCYSTR PCYSTR;
CStringT() throw();~CStringT() throw();
void __cdecl Format(PCXSTR pszFormat,...);
};
}
template class __declspec(dllimport) ATL::CSimpleStringT<char,true>;
template class __declspec(dllimport) ATL::CStringT<char,StrTraitMFC_DLL<char> >;
typedef ATL::CStringT<char,StrTraitMFC_DLL<char> > CStringA;
namespace RBX {class Log;class ILogProvider {public:virtual Log*provideLog()=0;};}
class LogManager {
public:
 virtual~LogManager();
 virtual std::string fileName()=0;
protected:
 RBX::Log*log;
 int number;
 std::string name;
};
class MainLogManager:public RBX::ILogProvider,public LogManager {public:virtual RBX::Log*provideLog();virtual std::string fileName();};
extern MainLogManager*mainLogManager;
class ThreadLogManager:public LogManager {public:virtual std::string fileName();};
std::string ThreadLogManager::fileName(){
 std::string result=mainLogManager->fileName();
 CStringA suffix;
 suffix.Format("_%s_%d",name.c_str(),number);
 result.insert(result.size()-4,static_cast<const char*>(suffix));
 return result;
}
typedef char NativeMfcStringSize[sizeof(CStringA)==4?1:-1];
typedef char NativeStdStringSize[sizeof(std::string)==28?1:-1];