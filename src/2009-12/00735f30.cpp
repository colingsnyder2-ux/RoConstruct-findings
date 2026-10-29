// roc 2009-12 00735f30  unit: RBX::Network::P8Player::?$GetSetImpl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00735f30
//
// 00735f30  8b442404             mov eax, dword ptr [esp + 4]
// 00735f34  8bd1                 mov edx, ecx
// 00735f36  85c0                 test eax, eax
// 00735f38  7417                 je 0x735f51
// 00735f3a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00735f3e  8b09                 mov ecx, dword ptr [ecx]
// 00735f40  51                   push ecx
// 00735f41  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00735f44  8b5210               mov edx, dword ptr [edx + 0x10]
// 00735f47  83c0e4               add eax, -0x1c
// 00735f4a  03c8                 add ecx, eax
// 00735f4c  ffd2                 call edx
// 00735f4e  c20800               ret 8
// 00735f51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00735f55  8b09                 mov ecx, dword ptr [ecx]
// 00735f57  51                   push ecx
// 00735f58  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00735f5b  8b5210               mov edx, dword ptr [edx + 0x10]
// 00735f5e  33c0                 xor eax, eax
// 00735f60  03c8                 add ecx, eax
// 00735f62  ffd2                 call edx
// 00735f64  c20800               ret 8
// copied from an identical function in another client (function ?setValue@?$GetSetImpl@P8Class@@BEABHXZP81@AEXH@Z@@UBEXPAVDescribedBase@@ABH@Z)

// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// Codegen analog of reflection GetSetImpl::setValue. The target converts
// DescribedBase* to Class* with "add eax,-0x1c": DescribedBase sits at +0x1c.
// Setter takes the dereferenced 4-byte value. Set member pointer is an 8-byte {fn, adj} pair at +0x10.

class DescribedBase { public: virtual ~DescribedBase(); };
// Bytes preceding DescribedBase in Class, sized from the target's 0x1c adjust.
class Before { public: virtual ~Before(); int words[6]; };
typedef int Value;
class Class : public Before, public DescribedBase {
public:
	const Value& getIt() const;
	void setIt(Value value);
};

class GetSet {
public:
	virtual ~GetSet() {}
	virtual bool isReadOnly() const = 0;
	virtual void setValue(DescribedBase* object, const Value& value) const = 0;
	int reserved;
};

template<typename GetFunction, typename SetFunction>
class GetSetImpl : public GetSet {
	GetFunction get;
	SetFunction set;
public:
	GetSetImpl(GetFunction get, SetFunction set) : get(get), set(set) {}
	virtual bool isReadOnly() const { return false; }
	virtual void setValue(DescribedBase* object, const Value& value) const
	{
		Class* o = (Class*)object;
		(o->*set)(value);
	}
};

template class GetSetImpl<const Value& (Class::*)() const, void (Class::*)(Value)>;