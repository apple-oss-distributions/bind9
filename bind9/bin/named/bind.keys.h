/*
 * Generated by bindkeys.pl 1.3.104.2 2010-06-20 23:46:24 tbox Exp  
 * From bind.keys 1.5.42.2 2011-01-04 19:14:48 each Exp  
 */
#define TRUSTED_KEYS "\
# The bind.keys file is used to override built-in DNSSEC trust anchors\n\
# which are included as part of BIND 9.  As of the current release (BIND\n\
# 9.7), the only trust anchor it sets is the one for the ISC DNSSEC\n\
# Lookaside Validation zone (\"dlv.isc.org\").  Trust anchors for any other\n\
# zones MUST be configured elsewhere; if they are configured here, they\n\
# will not be recognized or used by named.\n\
#\n\
# This file also contains a copy of the trust anchor for the DNS root zone\n\
# (\".\").  However, named does not use it; it is provided here for\n\
# informational purposes only.  To switch on DNSSEC validation at the\n\
# root, the root key below can be copied into named.conf.\n\
#\n\
# The built-in DLV trust anchor in this file is used directly by named.\n\
# However, it is not activated unless specifically switched on.  To use\n\
# the DLV key, set \"dnssec-lookaside auto;\" in the named.conf options.\n\
# Without this option being set, the key in this file is ignored.\n\
#\n\
# This file is NOT expected to be user-configured.\n\
#\n\
# These keys are current as of January 2011.  If any key fails to\n\
# initialize correctly, it may have expired.  In that event you should\n\
# replace this file with a current version.  The latest version of\n\
# bind.keys can always be obtained from ISC at https://www.isc.org/bind-keys.\n\
\n\
trusted-keys {\n\
	# ISC DLV: See https://www.isc.org/solutions/dlv for details.\n\
        # NOTE: This key is activated by setting \"dnssec-lookaside auto;\"\n\
        # in named.conf.\n\
	dlv.isc.org. 257 3 5 \"BEAAAAPHMu/5onzrEE7z1egmhg/WPO0+juoZrW3euWEn4MxDCE1+lLy2\n\
		brhQv5rN32RKtMzX6Mj70jdzeND4XknW58dnJNPCxn8+jAGl2FZLK8t+\n\
		1uq4W+nnA3qO2+DL+k6BD4mewMLbIYFwe0PG73Te9fZ2kJb56dhgMde5\n\
		ymX4BI/oQ+cAK50/xvJv00Frf8kw6ucMTwFlgPe+jnGxPPEmHAte/URk\n\
		Y62ZfkLoBAADLHQ9IrS2tryAe7mbBZVcOwIeU/Rw/mRx/vwwMCTgNboM\n\
		QKtUdvNXDrYJDSHZws3xiRXF1Rf+al9UmZfSav/4NWLKjHzpT59k/VSt\n\
		TDN0YUuWrBNh\";\n\
\n\
	# ROOT KEY: See https://data.iana.org/root-anchors/root-anchors.xml\n\
	# for current trust anchor information.\n\
        # NOTE: This key is activated by setting \"dnssec-validation auto;\"\n\
        # in named.conf.\n\
	. initial-key 257 3 8 \"AwEAAagAIKlVZrpC6Ia7gEzahOR+9W29euxhJhVVLOyQbSEW0O8gcCjF\n\
		FVQUTf6v58fLjwBd0YI0EzrAcQqBGCzh/RStIoO8g0NfnfL2MTJRkxoX\n\
		bfDaUeVPQuYEhg37NZWAJQ9VnMVDxP/VHL496M/QZxkjf5/Efucp2gaD\n\
		X6RS6CXpoY68LsvPVjR0ZSwzz1apAzvN9dlzEheX7ICJBBtuA6G3LQpz\n\
		W5hOA2hzCTMjJPJ8LbqF6dsV6DoBQzgul0sGIcGOYl7OyQdXfZ57relS\n\
		Qageu+ipAdTTJ25AsRTAoub8ONGcLmqrAmRLKBP1dfwhYB4N7knNnulq\n\
		QxA+Uk1ihz0=\";\n\
};\n\
"

#define MANAGED_KEYS "\
# The bind.keys file is used to override built-in DNSSEC trust anchors\n\
# which are included as part of BIND 9.  As of the current release (BIND\n\
# 9.7), the only trust anchor it sets is the one for the ISC DNSSEC\n\
# Lookaside Validation zone (\"dlv.isc.org\").  Trust anchors for any other\n\
# zones MUST be configured elsewhere; if they are configured here, they\n\
# will not be recognized or used by named.\n\
#\n\
# This file also contains a copy of the trust anchor for the DNS root zone\n\
# (\".\").  However, named does not use it; it is provided here for\n\
# informational purposes only.  To switch on DNSSEC validation at the\n\
# root, the root key below can be copied into named.conf.\n\
#\n\
# The built-in DLV trust anchor in this file is used directly by named.\n\
# However, it is not activated unless specifically switched on.  To use\n\
# the DLV key, set \"dnssec-lookaside auto;\" in the named.conf options.\n\
# Without this option being set, the key in this file is ignored.\n\
#\n\
# This file is NOT expected to be user-configured.\n\
#\n\
# These keys are current as of January 2011.  If any key fails to\n\
# initialize correctly, it may have expired.  In that event you should\n\
# replace this file with a current version.  The latest version of\n\
# bind.keys can always be obtained from ISC at https://www.isc.org/bind-keys.\n\
\n\
managed-keys {\n\
	# ISC DLV: See https://www.isc.org/solutions/dlv for details.\n\
        # NOTE: This key is activated by setting \"dnssec-lookaside auto;\"\n\
        # in named.conf.\n\
	dlv.isc.org. initial-key 257 3 5 \"BEAAAAPHMu/5onzrEE7z1egmhg/WPO0+juoZrW3euWEn4MxDCE1+lLy2\n\
		brhQv5rN32RKtMzX6Mj70jdzeND4XknW58dnJNPCxn8+jAGl2FZLK8t+\n\
		1uq4W+nnA3qO2+DL+k6BD4mewMLbIYFwe0PG73Te9fZ2kJb56dhgMde5\n\
		ymX4BI/oQ+cAK50/xvJv00Frf8kw6ucMTwFlgPe+jnGxPPEmHAte/URk\n\
		Y62ZfkLoBAADLHQ9IrS2tryAe7mbBZVcOwIeU/Rw/mRx/vwwMCTgNboM\n\
		QKtUdvNXDrYJDSHZws3xiRXF1Rf+al9UmZfSav/4NWLKjHzpT59k/VSt\n\
		TDN0YUuWrBNh\";\n\
\n\
	# ROOT KEY: See https://data.iana.org/root-anchors/root-anchors.xml\n\
	# for current trust anchor information.\n\
        # NOTE: This key is activated by setting \"dnssec-validation auto;\"\n\
        # in named.conf.\n\
	. initial-key 257 3 8 \"AwEAAagAIKlVZrpC6Ia7gEzahOR+9W29euxhJhVVLOyQbSEW0O8gcCjF\n\
		FVQUTf6v58fLjwBd0YI0EzrAcQqBGCzh/RStIoO8g0NfnfL2MTJRkxoX\n\
		bfDaUeVPQuYEhg37NZWAJQ9VnMVDxP/VHL496M/QZxkjf5/Efucp2gaD\n\
		X6RS6CXpoY68LsvPVjR0ZSwzz1apAzvN9dlzEheX7ICJBBtuA6G3LQpz\n\
		W5hOA2hzCTMjJPJ8LbqF6dsV6DoBQzgul0sGIcGOYl7OyQdXfZ57relS\n\
		Qageu+ipAdTTJ25AsRTAoub8ONGcLmqrAmRLKBP1dfwhYB4N7knNnulq\n\
		QxA+Uk1ihz0=\";\n\
};\n\
"
