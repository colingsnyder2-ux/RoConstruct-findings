// roc 2011-06 00689b30  unit: RBX::Network::P8Player::?$GetSetImpl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689b30
//
// 00689b30  8b442404             mov eax, dword ptr [esp + 4]
// 00689b34  8bd1                 mov edx, ecx
// 00689b36  85c0                 test eax, eax
// 00689b38  7417                 je 0x689b51
// 00689b3a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00689b3e  8b09                 mov ecx, dword ptr [ecx]
// 00689b40  51                   push ecx
// 00689b41  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00689b44  8b5210               mov edx, dword ptr [edx + 0x10]
// 00689b47  83c0e4               add eax, -0x1c
// 00689b4a  03c8                 add ecx, eax
// 00689b4c  ffd2                 call edx
// 00689b4e  c20800               ret 8
// 00689b51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00689b55  8b09                 mov ecx, dword ptr [ecx]
// 00689b57  51                   push ecx
// 00689b58  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 00689b5b  8b5210               mov edx, dword ptr [edx + 0x10]
// 00689b5e  33c0                 xor eax, eax
// 00689b60  03c8                 add ecx, eax
// 00689b62  ffd2                 call edx
// 00689b64  c20800               ret 8
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