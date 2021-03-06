// STL
#include <thread>
#include <unordered_set>
#include <unordered_map>

// Boost specific
#include <boost/asio.hpp>
namespace asio = boost::asio;

#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/support_istream_iterator.hpp>
namespace qi = boost::spirit::qi;
namespace spirit = boost::spirit;

#include <boost/fusion/include/std_pair.hpp>

#include <boost/spirit/include/phoenix.hpp>
namespace phoenix = boost::phoenix;

#include <boost/proto/proto.hpp>
namespace proto = boost::proto;

namespace fusion = boost::fusion;

static const std::string CRLF = "\r\n";
