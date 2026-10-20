// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_datamodel_http_native_family_8a874868dba17bdc.cpp

// Candidate translation unit (score above; library headers required).
#undef _RELEASEASSERT
#include "v8datamodel/DataModel.h"
#include "util/standardout.h"
#include "util/boost.hpp"
#include <boost/bind.hpp>
namespace RBX {

	std::string DataModel::httpGet(std::string url, bool synchronous)
	{
		if (synchronous)
		{
			return doHttpGet(url);
		}
		else
		{
			if (url.size() > 0)
			{
				boost::function0<void> f = boost::bind(&DataModel::doHttpGet, url);
				boost::function0<void> g = boost::bind(&StandardOut::print_exception, f, MESSAGE_ERROR, false);

				boost::thread(background_function(g, "rbx_httpGet"));
			}

			return "";
		}
	}

	std::string DataModel::httpPost(std::string url, std::string data, bool synchronous)
	{
		if (synchronous)
		{
			return doHttpPost(url, data);
		}
		else
		{
			boost::function0<void> f = boost::bind(&DataModel::doHttpPost, url, data);
			boost::function0<void> g = boost::bind(&StandardOut::print_exception, f, MESSAGE_ERROR, false);

			boost::thread(background_function(g, "rbx_httpPost"));

			return "";
		}
	}
}
