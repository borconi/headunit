
  #include <openssl/bio.h>
  #include <openssl/ssl.h>
  #include <openssl/err.h>
  #include <openssl/pem.h>
  #include <openssl/x509.h>
  #include <openssl/x509_vfy.h>

  //SSL_METHOD  * hu_ssl_method  = NULL;
  //SSL_CTX     * hu_ssl_ctx     = NULL;
  extern SSL         * hu_ssl_ssl   ;//  = NULL;
  extern BIO         * hu_ssl_rm_bio;//  = NULL;
  extern BIO         * hu_ssl_wm_bio;//  = NULL;

  void hu_ssl_ret_log (int ret);

  int hu_ssl_handshake ();


  // Internal:

#ifdef  MR_SSL_INTERNAL
  // 2048 bits,  Signature Algorithm: sha256WithRSAEncryption

  #define cert_buf  hu_ssl_cert_mr_buf
  #define pkey_buf  hu_ssl_pkey_mr_buf
// Valid SSL KEY PAIR IS NEEDED, which passes CA, self sign keys are not ACCEPTED
    char hu_ssl_cert_mr_buf [] = "-----BEGIN CERTIFICATE-----\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
-----END CERTIFICATE-----\n";

    char hu_ssl_pkey_mr_buf [] = "-----BEGIN RSA PRIVATE KEY-----\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE_USE_YOUR_OWN_REAL_KEY_SAMPLE\n\
-----END RSA PRIVATE KEY-----\n";

#endif  //#ifdef  MR_SSL_INTERNAL

