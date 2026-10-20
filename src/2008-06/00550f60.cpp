// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_inherited_members_8012541ea306ed9d.cpp

// Candidate translation unit (score above; library headers required).
#define _DLL
#include <map>
#include <set>
#include <string>
#include <boost/shared_ptr.hpp>
struct T;
typedef std::map<int, std::string > C;
C::iterator findOne(C& c, const C::key_type& k) { return c.find(k); }
C::iterator lowerOne(C& c, const C::key_type& k) { return c.lower_bound(k); }
C::iterator upperOne(C& c, const C::key_type& k) { return c.upper_bound(k); }
std::pair<C::iterator, C::iterator> equalOne(C& c, const C::key_type& k) { return c.equal_range(k); }
C::size_type countOne(const C& c, const C::key_type& k) { return c.count(k); }
std::pair<C::iterator, bool> insertOne(C& c, const C::value_type& v) { return c.insert(v); }
C::iterator insertHint(C& c, C::iterator p, const C::value_type& v) { return c.insert(p, v); }
C::iterator eraseOne(C& c, C::iterator p) { return c.erase(p); }
C::iterator eraseRange(C& c, C::iterator a, C::iterator b) { return c.erase(a, b); }
C::size_type eraseKey(C& c, const C::key_type& k) { return c.erase(k); }
void clearAll(C& c) { c.clear(); }
void swapBoth(C& a, C& b) { a.swap(b); }
void assignBoth(C& a, const C& b) { a = b; }
