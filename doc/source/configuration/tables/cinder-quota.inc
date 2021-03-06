..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-quota:

.. list-table:: Description of quota configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``max_age`` = ``0``
     - (Integer) Number of seconds between subsequent usage refreshes
   * - ``quota_backup_gigabytes`` = ``1000``
     - (Integer) Total amount of storage, in gigabytes, allowed for backups per project
   * - ``quota_backups`` = ``10``
     - (Integer) Number of volume backups allowed per project
   * - ``quota_consistencygroups`` = ``10``
     - (Integer) Number of consistencygroups allowed per project
   * - ``quota_driver`` = ``cinder.quota.DbQuotaDriver``
     - (String) Default driver to use for quota checks
   * - ``quota_gigabytes`` = ``1000``
     - (Integer) Total amount of storage, in gigabytes, allowed for volumes and snapshots per project
   * - ``quota_groups`` = ``10``
     - (Integer) Number of groups allowed per project
   * - ``quota_snapshots`` = ``10``
     - (Integer) Number of volume snapshots allowed per project
   * - ``quota_volumes`` = ``10``
     - (Integer) Number of volumes allowed per project
   * - ``reservation_expire`` = ``86400``
     - (Integer) Number of seconds until a reservation expires
   * - ``use_default_quota_class`` = ``True``
     - (Boolean) Enables or disables use of default quota class with default quota.
